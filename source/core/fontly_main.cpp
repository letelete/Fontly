#include "core/fontly_main.hpp"
#include "ui_fontly.h"

fontly::fontly(QWidget *parent) :
    QWidget(parent, Qt::FramelessWindowHint),
    ui(new Ui::fontly)
{
    ui->setupUi(this);

    QColor shadowColor(0,0,0,50);
    setShadow = new shadow(5, 1, 0, shadowColor, this);
    ui->leftPanelArea->setGraphicsEffect( setShadow->effect );

    sectionTabs = new sections(ui->fontPickerLabel, ui->myFontsLabel, ui->settingsLabel,
                               ui->fontPickerIcon, ui->fontPickerIsActive,
                               ui->myFontsIcon, ui->myFontsIsActive,
                               ui->settingsIcon, ui->settingsIsActive,
                               this);

    connect(ui->minimize, SIGNAL(clicked(bool)), this, SLOT(showMinimized()));
    connect(ui->close, SIGNAL(clicked(bool)), qApp, SLOT(quit()));
    connect(ui->maximize, SIGNAL(clicked(bool)), this, SLOT(resizeWindow()));

    ui->currentWindow->insertWidget(1, &fontpickerTab);
    ui->currentWindow->insertWidget(2, &myfontsTab);
    ui->currentWindow->insertWidget(3, &settingsTab);

    setCurrentWindowIndex(1);
}

void fontly::mousePressEvent(QMouseEvent *event)
{
    if (event->button() == Qt::LeftButton)
    {
        dragPosition = event->globalPos() - frameGeometry().topLeft();
        event->accept();
    }
}

void fontly::mouseMoveEvent(QMouseEvent *event)
{
    if (event->buttons() & Qt::LeftButton && event->globalY() - frameGeometry().topLeft().y() <= 40)
    {
        move(event->globalPos() - dragPosition);
        event->accept();
    }
}

void fontly::resizeWindow()
{
    if(this->size().height() == 720)
    {
        this->resize(QSize(1280, 450));
        ui->bottomBorder->move(QPoint(0,410));
    }
    else
    {
        this->resize(QSize(1280,720));
        ui->bottomBorder->move(QPoint(0,680));
    }
}



void fontly::setCurrentWindowIndex(int index)
{
    ui->currentWindow->setCurrentIndex(index);
    sectionTabs->setTabStyle(index);
}

void fontly::on_fontPickerButton_clicked()
{
    setCurrentWindowIndex(1);
}

void fontly::on_myFontsButton_clicked()
{
    setCurrentWindowIndex(2);
}

void fontly::on_settingsButton_clicked()
{
    setCurrentWindowIndex(3);
}



void fontly::open_url(QString URL)
{
    QDesktopServices::openUrl(QUrl(URL));
}

void fontly::on_githubButton_clicked()
{
    open_url(QString("https://github.com/letelete/Fontly"));
}

void fontly::on_websiteButton_clicked()
{
    open_url(QString("http://brunokawka.pl/"));
}



fontly::~fontly()
{
    delete sectionTabs;
    delete ui;
    delete setShadow;
}
