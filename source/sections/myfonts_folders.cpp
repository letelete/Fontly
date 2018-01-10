#include "sections/includes/myfonts_folders.hpp"
#include "ui_myfonts_folders.h"

myfonts_folders::myfonts_folders(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::myfonts_folders)
{
    ui->setupUi(this);

    std::array<QWidget*, 2> widgets {{ui->favFolder_const, ui->addNewFolder_const}};
    for(auto &w : widgets) addWidgets(w);
}

void myfonts_folders::addWidgets(QWidget *folderWidget)
{
    QListWidgetItem *newFolder = new QListWidgetItem(ui->folderList);
    newFolder->setSizeHint(QSize(200,200));

    ui->folderList->setItemWidget(newFolder, folderWidget);
}

void myfonts_folders::on_addNewFolderIcon_clicked()
{
    auto currentRow = ui->folderList->currentRow();
    auto nextRow = currentRow + 1;

    QListWidgetItem *folder = new QListWidgetItem("New Folder");
    QListWidgetItem *newFolderTemp = new QListWidgetItem;

    folder->setSizeHint(QSize(200,200));
    folder->setBackgroundColor(QColor(45, 52, 58));
    folder->setForeground(QColor("#d9d9d9"));

    ui->folderList->addItem(folder);
    newFolderTemp = ui->folderList->item(currentRow);

    ui->folderList->takeItem(currentRow + 1);
    ui->folderList->takeItem(nextRow + 2);

    ui->folderList->insertItem(currentRow, folder);
    ui->folderList->insertItem(nextRow, newFolderTemp);
}

myfonts_folders::~myfonts_folders()
{
    delete ui;
}
