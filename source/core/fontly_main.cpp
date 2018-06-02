#include "core/fontly_main.hpp"
#include "ui_fontly.h"

fontly::fontly(QWidget *parent) :
    QWidget(parent, Qt::FramelessWindowHint),
    ui(new Ui::fontly)
{
    ui->setupUi(this);

    QColor shadowColor(0,0,0,50);
    setShadow = new shadow(5, 1, 0, shadowColor, this);
    ui->leftPanelArea->setGraphicsEffect(setShadow->effect);

    connect(ui->minimize, SIGNAL(clicked(bool)), this, SLOT(showMinimized()));
    connect(ui->close, SIGNAL(clicked(bool)), qApp, SLOT(quit()));
    connect(ui->maximize, SIGNAL(clicked(bool)), this, SLOT(resizeWindowDependlyOnCurrentSize()));

    int fontPickerIndex = 1;
    ui->currentWindow->insertWidget(fontPickerIndex, &fontpickerTab);
    ui->currentWindow->setCurrentIndex(fontPickerIndex);
}

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

void fontly::resizeWindowDependlyOnCurrentSize()
{
    if(this->size().height() == 720) {
        this->resize(QSize(1280, 450));
    } else {
        this->resize(QSize(1280,720));
    }

    updateBottomBorderPosition(this->size().height());
}

void fontly::updateBottomBorderPosition(int windowHeight)
{
    int bottomBorderHeight = ui->bottomBorder->size().height();
    int margin = 30;
    int newBorderPositionInYAxis = windowHeight - bottomBorderHeight - margin;

    setBottomBorderPosition(newBorderPositionInYAxis);
}

void fontly::setBottomBorderPosition(int newPositionInYAxis)
{
    int positionInXAxis = ui->bottomBorder->pos().x();
    ui->bottomBorder->move(QPoint(positionInXAxis, newPositionInYAxis));
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
    delete ui;
    delete setShadow;
}
