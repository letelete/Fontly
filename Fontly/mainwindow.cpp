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
#include <QPalette>

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
    ui->textScroll->setStyleSheet("left: 20px; padding-left: 20px");

    textLabel_FONT.setPixelSize(60);

    for(int i=0; i<fontsList.length(); i++)
    {
        QListWidgetItem *fontInfoLabel = new QListWidgetItem(QString(fontsList[i]) + "   |   60px");
        QListWidgetItem *textLabel = new QListWidgetItem("Have a great day!");

        textLabel->setSizeHint(QSize(0,textLabel_FONT.pixelSize()+50));
        textLabel->setForeground(QColor(0,0,0,200));
        textLabel_FONT.setFamily(fontsList[i]);
        textLabel->setFont(textLabel_FONT);

        fontInfoLabel->setSizeHint(QSize(1000,40));
        fontInfoLabel->setBackgroundColor(QColor(245,245,245));
        fontInfoLabel->setForeground(QColor(0,0,0,100));
        fontInfoLabel->setFont(QFont("Roboto", 10));

        ui->textScroll->addItem(fontInfoLabel);
        ui->textScroll->addItem(textLabel);
    }
}

MainWindow::~MainWindow()
{
    delete ui;
}

// Window action buttons + drag & move

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

// Font picker buttons

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
        textFont.setPixelSize(value+20);

        int k = 0;
        for(int i=1; i<ui->textScroll->count(); i += 2)
        {
            textFont.setFamily(ui->textScroll->item(i)->font().family());
            ui->textScroll->item(i)->setSizeHint(QSize(0,textFont.pixelSize()+50));
            ui->textScroll->item(i)->setFont(textFont);
            ui->textScroll->item(k)->setText(ui->textScroll->item(i)->font().family() + "  |  " + QString::number(textFont.pixelSize()) + " px");
            k += 2;
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
    QColor color = QColorDialog::getColor(QColor(ui->textScroll->palette().color(ui->textScroll->backgroundRole())), this, "Choose background color").toHsv();
    QColor contrastBackgroundColor = color.value() < 60 ? color.darker(60) : color.darker(110);
    QColor contrastTextColor = QColor(33,33,33);

    if(color.isValid())
    {
        QString sheet = QString::fromLatin1("padding-left: 20px; background-color: %1 }").arg(color.name());
        ui->textScroll->setStyleSheet(sheet);

        if( (( ((contrastBackgroundColor.hue() >= 190) && (contrastBackgroundColor.hue() <= 359))
            || ((contrastBackgroundColor.hue() >= 0) && (contrastBackgroundColor.hue() <= 45)))
            && ((contrastBackgroundColor.saturation() <= 255) && (contrastBackgroundColor.saturation() >= 100)))
            || ((contrastBackgroundColor.value() >= 60) && (contrastBackgroundColor.value() <= 180)) )
        {
            contrastTextColor = QColor(220,220,220);
        }
        else if(contrastBackgroundColor.value() < 60)
        {
            contrastTextColor = QColor(150,150,150);
        }
        else if(contrastBackgroundColor.value() > 220)
        {
            contrastTextColor = QColor(85,85,85);
        }

        for(int i=0; i<ui->textScroll->count(); i += 2)
        {
            ui->textScroll->item(i)->setTextColor(contrastTextColor);
            ui->textScroll->item(i)->setBackgroundColor(contrastBackgroundColor);
        }
    }
}

void MainWindow::on_resetSettings_clicked()
{
    QFont textFont;
    textFont.setPixelSize(ui->textSizeChanger->value()+10);                                     //reset font size

    int k = 0;
    for(int i=1; i<ui->textScroll->count(); i += 2)
    {
        textFont.setFamily(ui->textScroll->item(i)->font().family());                           //reset font size
        ui->textScroll->item(i)->setFont(textFont);                                             //reset font size

        ui->textScroll->item(i)->setTextColor(QColor(0,0,0,200));                               //reset text color
        ui->textScroll->item(i)->setSizeHint(QSize(0, 90));                                     //reset QListWidgetItem size policy
        ui->textScroll->item(k)->setBackgroundColor(QColor(245, 245, 245));                     //reset font info panel background
        ui->textScroll->item(k)->setTextColor(QColor(0,0,0,100));                               //reset font info panel text color

        k += 2;
    }
    ui->textSizeChanger->setValue(50);                                                          //reset slider value
    ui->textSizeChanger->setSliderPosition(50);                                                 //reset slider position
    ui->textScroll->setStyleSheet("padding-left: 20px; background-color: rgb(255, 255, 255);"); //reset background color
}
