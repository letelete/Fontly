#ifndef MYFONTS_H
#define MYFONTS_H

#include <QWidget>
#include <QListWidget>

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

    void on_addNewFolderIcon_clicked();

private:
    Ui::myfonts *ui;
};

#endif // MYFONTS_H
