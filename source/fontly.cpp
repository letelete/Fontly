#include "headers/fontly.h"
#include "ui_fontly.h"

fontly::fontly(QWidget *parent) :
    QWidget(parent, Qt::FramelessWindowHint),
    ui(new Ui::fontly)
{
    ui->setupUi(this);

    ui->currentWindow->insertWidget(1, &fontpickerTab);
    ui->currentWindow->insertWidget(2, &myfontsTab);
    ui->currentWindow->insertWidget(3, &settingsTab);

    on_fontPickerButton_clicked();
}

// ------------- BASIC FUNCTIONS (drag window, action buttons) -------------------

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

void fontly::on_close_clicked()
{
    qApp->quit();
}

void fontly::on_maximize_clicked()
{
    if(this->size().height() == 720)
    {
        this->resize(QSize(1280, 450));
        ui->bottomBorder->move(QPoint(0,425));
    }
    else
    {
        this->resize(QSize(1280,720));
        ui->bottomBorder->move(QPoint(0,680));
    }
}

void fontly::on_minimize_clicked()
{
    this->showMinimized();
}

// ------------------------------------- TABS -------------------------------------

void fontly::tab_style(bool isTabActive, QLabel *label, QFrame *icon, QFrame *isActive, QString iconName)
{
    QString textColor = "color: rgba(255, 255, 255, 0.5)", backgroundColor = "#37474f";

    if(isTabActive)
    {
        textColor = "color: rgba(255, 255, 255, 0.9)";
        backgroundColor = "background-color: #263238";
    }

    label->setStyleSheet(textColor);
    icon->setStyleSheet(QString("image: url(:/assets/icons/" + iconName + ")"));
    isActive->setStyleSheet(backgroundColor);
}

void fontly::on_fontPickerButton_clicked()
{
    ui->currentWindow->setCurrentIndex(1);
    tab_style(true, ui->fontPickerLabel, ui->fontPickerIcon, ui->fontPickerIsActive, "fontpickerACTIVE.png");

    tab_style(false, ui->myFontsLabel, ui->myFontsIcon, ui->myFontsIsActive, "myfonts.png");
    tab_style(false, ui->settingsLabel, ui->settingsIcon, ui->settingsIsActive, "settings.png");
}

void fontly::on_myFontsButton_clicked()
{
    ui->currentWindow->setCurrentIndex(2);
    tab_style(true, ui->myFontsLabel, ui->myFontsIcon, ui->myFontsIsActive, "myfontsACTIVE.png");

    tab_style(false, ui->fontPickerLabel, ui->fontPickerIcon, ui->fontPickerIsActive, "fontpicker.png");
    tab_style(false, ui->settingsLabel, ui->settingsIcon, ui->settingsIsActive, "settings.png");
}

void fontly::on_settingsButton_clicked()
{
    ui->currentWindow->setCurrentIndex(3);
    tab_style(true, ui->settingsLabel, ui->settingsIcon, ui->settingsIsActive, "settingsACTIVE.png");

    tab_style(false, ui->myFontsLabel, ui->myFontsIcon, ui->myFontsIsActive, "myfonts.png");
    tab_style(false, ui->fontPickerLabel, ui->fontPickerIcon, ui->fontPickerIsActive, "fontpicker.png");
}

// ------------------------------ SOCIAL URLS -------------------------------------

void fontly::on_githubButton_clicked()
{
    QString url = ("https://github.com/letelete/fontly");
    QDesktopServices::openUrl(QUrl(url));
}

void fontly::on_facebookButton_clicked()
{
    QString url = ("https://www.facebook.com/00000000000oo000000000000000");
    QDesktopServices::openUrl(QUrl(url));
}

void fontly::on_websiteButton_clicked()
{
    QString url = ("http://www.brunokawka.pl");
    QDesktopServices::openUrl(QUrl(url));
}


fontly::~fontly()
{
    delete ui;
}


