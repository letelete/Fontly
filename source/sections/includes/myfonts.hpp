#ifndef MYFONTS_H
#define MYFONTS_H

#include <QListWidget>

#include "sections/includes/myfonts_folders.hpp"
#include "sections/includes/myfonts_folderopen.hpp"
#include "core/shadow.hpp"

enum sortState
{
    sortDefault,
    sortAsc,
    sortDesc
};

namespace Ui {
class myfonts;
}

class myfonts : public QWidget
{
    Q_OBJECT

public:
    explicit myfonts(QWidget *parent = 0);
    ~myfonts();

signals:
    sortStateChanged();

private slots:
    void changeSortState();

private:
    Ui::myfonts *ui;
    myfonts_folderOpen mf_folderopen;
    myfonts_folders mf_folder;
    shadow *setShadow;
    sortState sortstate;
};

#endif // MYFONTS_H
