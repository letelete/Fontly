#include "headers/myfonts.h"
#include "ui_myfonts.h"

#include <QListWidget>
#include <QLayout>

myfonts::myfonts(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::myfonts)
{
    ui->setupUi(this);

    ui->listWidget->setSelectionMode(QAbstractItemView::NoSelection);
    ui->listWidget->setViewMode(QListWidget::IconMode);
    ui->listWidget->setResizeMode(QListWidget::Adjust);
    ui->listWidget->setSpacing(40);

    QListWidgetItem *newFolder = new QListWidgetItem(ui->listWidget);
    newFolder->setSizeHint(QSize(200,200));

    ui->listWidget->setItemWidget(newFolder, ui->addNewFolder);
}

myfonts::~myfonts()
{
    delete ui;
}

void myfonts::on_addNewFolderIcon_clicked()
{
    int currentRow = ui->listWidget->currentRow();
    int nextRow = currentRow + 1;

    QListWidgetItem *folder = new QListWidgetItem("New Folder");

    folder->setSizeHint(QSize(200,200));
    folder->setBackgroundColor(QColor(57, 71, 79));
    folder->setForeground(QColor("#f5f5f5"));
    ui->listWidget->addItem(folder);

    QListWidgetItem *newFolderTemp = new QListWidgetItem;

    newFolderTemp = ui->listWidget->item(currentRow);
    ui->listWidget->takeItem(currentRow+1);
    ui->listWidget->takeItem(nextRow+2);

    ui->listWidget->insertItem(currentRow, folder);
    ui->listWidget->insertItem(nextRow, newFolderTemp);


}
