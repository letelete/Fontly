#include "sections/includes/myfonts.hpp"
#include "ui_myfonts.h"

myfonts::myfonts(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::myfonts)
{
    ui->setupUi(this);

    QColor shadowColor(0,0,0,100);
    setShadow = new shadow(5, 0, 1, shadowColor, this);

    ui->widgetsPanel->setGraphicsEffect( setShadow->effect );

    ui->myFontsTabs->insertWidget(1, &mf_folder);
    ui->myFontsTabs->insertWidget(2, &mf_folderopen);
    ui->myFontsTabs->setCurrentIndex(1);

    connect(ui->sortButton_DATE, SIGNAL(clicked(bool)), this, SIGNAL(sortStateChanged()));
    connect(ui->sortButton_NAME, SIGNAL(clicked(bool)), this, SIGNAL(sortStateChanged()));
    connect(this, SIGNAL(sortStateChanged()), this, SLOT(changeSortState()));
}

void myfonts::changeSortState()
{

}

myfonts::~myfonts()
{
    delete ui;
    delete setShadow;
}


