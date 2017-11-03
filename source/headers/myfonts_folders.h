#ifndef MYFONTS_FOLDERS_H
#define MYFONTS_FOLDERS_H

#include <QWidget>

namespace Ui {
class myfonts_folders;
}

class myfonts_folders : public QWidget
{
    Q_OBJECT

public:
    explicit myfonts_folders(QWidget *parent = 0);
    ~myfonts_folders();

private slots:
    void on_addNewFolderIcon_clicked();
    void addWidgets(QWidget*);

private:
    Ui::myfonts_folders *ui;
};

#endif // MYFONTS_FOLDERS_H
