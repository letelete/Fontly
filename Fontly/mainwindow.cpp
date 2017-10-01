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
    ui->fontApply->setPlaceholderText("Type something here..");
    ui->search->setPlaceholderText("Search..");
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_maximize_clicked()
{
    if(this->size().height() == 720)
        this->resize(QSize(1280, 390));

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
    if(event->button() & Qt::LeftButton) {
        move(event->globalPos() - dragPosition);
        event->accept();
    }
}

