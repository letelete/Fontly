#ifndef MYFONTS_H
#define MYFONTS_H

#include <QWidget>
#include <QListWidget>

#include "headers/myfonts_folders.h"
#include "headers/myfonts_folderopen.h"

namespace Ui {
class myfonts;
}

class myfonts : public QWidget
{
    Q_OBJECT

public:
    explicit myfonts(QWidget *parent = 0);
    ~myfonts();

private slots:

private:
    Ui::myfonts *ui;
    myfonts_folderOpen mf_folderopen;
    myfonts_folders mf_folder;
};

#endif // MYFONTS_H
