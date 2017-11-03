#include "headers\myfonts_folderopen.h"
#include "ui_myfonts_folderopen.h"

myfonts_folderOpen::myfonts_folderOpen(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::myfonts_folderOpen)
{
    ui->setupUi(this);
}

myfonts_folderOpen::~myfonts_folderOpen()
{
    delete ui;
}
