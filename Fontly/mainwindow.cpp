#include "mainwindow.h"
#include "ui_mainwindow.h"

#include <QScrollArea>
#include <QVBoxLayout>
#include <QHBoxLayout>
#include <QLabel>
#include <QFontDatabase>
#include <QString>
#include <QSize>
#include <QLine>
#include <QColorDialog>

#include <QDesktopServices>
#include <QUrl>
#include <QMouseEvent>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent, Qt::FramelessWindowHint),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    //Font declaration
    QStringList fontsList = QFontDatabase().families();
    QFont textLabel_FONT;

    //configuration
    ui->textSizeChanger->setValue(50);
    ui->fontApply->setPlaceholderText("Type something here..");
    ui->search->setPlaceholderText("Search..");
    ui->textScroll->setStyleSheet("padding-left: 20px");

    textLabel_FONT.setPointSize(50);

    for(int i=0; i<fontsList.length(); i++)
    {

        QListWidgetItem *fontInfoLabel = new QListWidgetItem(QString(fontsList[i]));
        QListWidgetItem *textLabel = new QListWidgetItem("Have a great day!");

        textLabel->setSizeHint(QSize(0,100));
        textLabel->setForeground(QColor(0,0,0,175));

        fontInfoLabel->setSizeHint(QSize(1000,40));
        fontInfoLabel->setBackgroundColor(QColor(245,245,245));
        fontInfoLabel->setForeground(QColor(0,0,0,100));
        fontInfoLabel->setFont(QFont("Lato Black", 10, QFont::Bold));


        textLabel_FONT.setFamily(fontsList[i]);
        textLabel->setFont(textLabel_FONT);

        ui->textScroll->addItem(fontInfoLabel);
        ui->textScroll->addItem(textLabel);
    }
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_maximize_clicked()
{
    if(this->size().height() == 720) {
        this->resize(QSize(1280, 405));
    }
    else this->resize(QSize(1280,720));

}

void MainWindow::mousePressEvent(QMouseEvent *event)
{
    if(event->button() == Qt::LeftButton) {
        dragPosition = event->globalPos() - frameGeometry().topLeft();
        event->accept();
    }
}

void MainWindow::mouseMoveEvent(QMouseEvent *event)
{
    if(event->button() == Qt::LeftButton) {
        move(event->globalPos() - dragPosition);
        event->accept();
    }
}


void MainWindow::on_fontApply_textChanged()
{
    for(int i=1; i<ui->textScroll->count(); i += 2)
    {
        ui->textScroll->item(i)->setText(ui->fontApply->text());
    }
}

void MainWindow::on_textSizeChanger_valueChanged(int value)
{
    QFont textFont;
    if(value>=10)
        textFont.setPointSize(value);

    for(int i=1; i<ui->textScroll->count(); i += 2)
    {
        textFont.setFamily(ui->textScroll->item(i)->font().family());
        ui->textScroll->item(i)->setSizeHint(QSize(0,textFont.pointSize()+50));
        ui->textScroll->item(i)->setFont(textFont);
    }
}

void MainWindow::on_textColor_clicked()
{
    QColor color;
    color = QColorDialog::getColor(Qt::white, this, "Choose text color");

    if(color.isValid())
    {
        for(int i=1; i<ui->textScroll->count(); i += 2)
        {
            ui->textScroll->item(i)->setTextColor(color);
        }
    }
}

void MainWindow::on_textBackgroundColor_clicked()
{
    QColor color = QColorDialog::getColor(Qt::white, this, "Choose background color");

    if(color.isValid())
    {
        QString sheet = QString::fromLatin1("background-color: %1 }").arg(color.name());
        ui->textScroll->setStyleSheet(sheet);
    }
}

void MainWindow::on_resetSettings_clicked()
{
    ui->textSizeChanger->setSliderPosition(50); //reset slider position
    ui->textScroll->setStyleSheet("background-color: rgb(255, 255, 255);"); //reset background color

    QFont textFont; //reset font size
    textFont.setPointSize(ui->textSizeChanger->sliderPosition()); //reset font size

    for(int i=1; i<ui->textScroll->count(); i += 2)
    {
        textFont.setFamily(ui->textScroll->item(i)->font().family()); //reset font size
        ui->textScroll->item(i)->setFont(textFont); //reset font size

        ui->textScroll->item(i)->setTextColor(QColor(33, 33 ,33)); //reset text color
        ui->textScroll->item(i)->setSizeHint(QSize(0, 100)); //reset QListWidgetItem size policy
    }
    ui->textSizeChanger->setValue(50);
    ui->fontApply->setPlaceholderText("Type something here..");
    ui->search->setPlaceholderText("Search..");
    ui->textScroll->setStyleSheet("padding-left: 20px");
}
