#include "headers\myfonts_folders.h"
#include "ui_myfonts_folders.h"

myfonts_folders::myfonts_folders(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::myfonts_folders)
{
    ui->setupUi(this);
}

myfonts_folders::~myfonts_folders()
{
    delete ui;
}
