#include "headers\myfonts_folders.h"
#include "ui_myfonts_folders.h"

#include <array>
#include <QListWidget>

myfonts_folders::myfonts_folders(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::myfonts_folders)
{
    ui->setupUi(this);

    std::array<QWidget*, 2> widgets {ui->favFolder_const, ui->addNewFolder_const};
    for(auto &w : widgets) addWidgets(w);
}

void myfonts_folders::addWidgets(QWidget *folderWidget)
{
    QListWidgetItem *newFolder = new QListWidgetItem(ui->listWidget);
    newFolder->setSizeHint(QSize(200,200));

    ui->listWidget->setItemWidget(newFolder, folderWidget);
}

void myfonts_folders::on_addNewFolderIcon_clicked()
{
    int currentRow = ui->listWidget->currentRow();
    int nextRow = currentRow + 1;

    QListWidgetItem *folder = new QListWidgetItem("New Folder");
    QListWidgetItem *newFolderTemp = new QListWidgetItem;

    folder->setSizeHint(QSize(200,200));
    folder->setBackgroundColor(QColor(57, 71, 79));
    folder->setForeground(QColor("#f5f5f5"));

    ui->listWidget->addItem(folder);
    newFolderTemp = ui->listWidget->item(currentRow);

    ui->listWidget->takeItem(currentRow + 1);
    ui->listWidget->takeItem(nextRow + 2);

    ui->listWidget->insertItem(currentRow, folder);
    ui->listWidget->insertItem(nextRow, newFolderTemp);
}

myfonts_folders::~myfonts_folders()
{
    delete ui;
}
