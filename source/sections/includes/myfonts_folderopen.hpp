#ifndef MYFONTS_FOLDEROPEN_H
#define MYFONTS_FOLDEROPEN_H

#include <QWidget>

namespace Ui {
class myfonts_folderOpen;
}

class myfonts_folderOpen : public QWidget
{
    Q_OBJECT

public:
    explicit myfonts_folderOpen(QWidget *parent = 0);
    ~myfonts_folderOpen();

private:
    Ui::myfonts_folderOpen *ui;
};

#endif // MYFONTS_FOLDEROPEN_H
