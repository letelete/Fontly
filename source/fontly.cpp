#include "fontly.h"
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
    if (event->button() == Qt::LeftButton) {
        dragPosition = event->globalPos() - frameGeometry().topLeft();
        event->accept();
    }
}

void fontly::mouseMoveEvent(QMouseEvent *event)
{
    if (event->buttons() & Qt::LeftButton && event->globalY() - frameGeometry().topLeft().y() <= 40) {
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
    if(this->size().height() == 720) {
        this->resize(QSize(1280, 405));
        ui->bottomBorder->move(QPoint(0,380));
    }
    else
    {
        this->resize(QSize(1280,720));
        ui->bottomBorder->move(QPoint(0,670));
    }
}

void fontly::on_minimize_clicked()
{
    this->showMinimized();
}

// ------------------------------------- TABS -------------------------------------


void fontly::on_fontPickerButton_clicked()
{
    ui->currentWindow->setCurrentIndex(1);

    ui->fontPickerLabel->setStyleSheet(QString("color: #fff"));
    ui->fontPickerIcon->setStyleSheet(QString("image: url(:/assets/icons/fontpickerACTIVE.png)"));
    ui->fontPickerIsActive->setStyleSheet(QString("background-color: rgb(38, 50, 56)"));

    ui->myFontsLabel->setStyleSheet(QString("color: rgba(0,0,0,.35)"));
    ui->myFontsIcon->setStyleSheet(QString("image: url(:/assets/icons/myfonts.png);"));
    ui->myFontsIsActive->setStyleSheet(QString("background-color: rgb(245,245,245)"));

    ui->settingsLabel->setStyleSheet(QString("color: rgba(0,0,0,.35)"));
    ui->settingsIcon->setStyleSheet(QString("image: url(:/assets/icons/settings.png);"));
    ui->settingsIsActive->setStyleSheet(QString("background-color: rgb(245,245,245)"));

}

void fontly::on_myFontsButton_clicked()
{

    ui->currentWindow->setCurrentIndex(2);

    ui->myFontsLabel->setStyleSheet(QString("color: #fff"));
    ui->myFontsIcon->setStyleSheet(QString("image: url(:/assets/icons/myfontsACTIVE.png)"));
    ui->myFontsIsActive->setStyleSheet(QString("background-color: rgb(38, 50, 56)"));

    ui->fontPickerLabel->setStyleSheet(QString("color: rgba(0,0,0,.35)"));
    ui->fontPickerIcon->setStyleSheet(QString("image: url(:/assets/icons/fontpicker.png);"));
    ui->fontPickerIsActive->setStyleSheet(QString("background-color: rgb(245,245,245)"));

    ui->settingsLabel->setStyleSheet(QString("color: rgba(0,0,0,.35)"));
    ui->settingsIcon->setStyleSheet(QString("image: url(:/assets/icons/settings.png);"));
    ui->settingsIsActive->setStyleSheet(QString("background-color: rgb(245,245,245)"));
}

void fontly::on_settingsButton_clicked()
{

    ui->currentWindow->setCurrentIndex(3);

    ui->settingsLabel->setStyleSheet(QString("color: #fff"));
    ui->settingsIcon->setStyleSheet(QString("image: url(:/assets/icons/settingsACTIVE.png)"));
    ui->settingsIsActive->setStyleSheet(QString("background-color: rgb(38, 50, 56)"));

    ui->fontPickerLabel->setStyleSheet(QString("color: rgba(0,0,0,.35)"));
    ui->fontPickerIcon->setStyleSheet(QString("image: url(:/assets/icons/fontpicker.png);"));
    ui->fontPickerIsActive->setStyleSheet(QString("background-color: rgb(245,245,245)"));

    ui->myFontsLabel->setStyleSheet(QString("color: rgba(0,0,0,.35)"));
    ui->myFontsIcon->setStyleSheet(QString("image: url(:/assets/icons/myfonts.png);"));
    ui->myFontsIsActive->setStyleSheet(QString("background-color: rgb(245,245,245)"));\
}

// ------------------------------ SOCIAL URLS -------------------------------------

void fontly::on_githubButton_clicked()
{
    url = ("https://github.com/letelete/fontly");
    QDesktopServices::openUrl(QUrl(url));
}

void fontly::on_facebookButton_clicked()
{
    url = ("https://www.facebook.com/00000000000oo000000000000000");
    QDesktopServices::openUrl(QUrl(url));
}

void fontly::on_websiteButton_clicked()
{
    url = ("http://www.brunokawka.pl");
    QDesktopServices::openUrl(QUrl(url));
}


fontly::~fontly()
{
    delete ui;
}


