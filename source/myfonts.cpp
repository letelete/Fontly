#include "myfonts.h"
#include "ui_myfonts.h"

myfonts::myfonts(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::myfonts)
{
    ui->setupUi(this);
}

myfonts::~myfonts()
{
    delete ui;
}
