#include "headers/myfonts.h"
#include "ui_myfonts.h"

myfonts::myfonts(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::myfonts)
{
    ui->setupUi(this);

    ui->myFontsTabs->insertWidget(1, &mf_folder);
    ui->myFontsTabs->insertWidget(2, &mf_folderopen);
    ui->myFontsTabs->setCurrentIndex(1);
}

myfonts::~myfonts()
{
    delete ui;
}

