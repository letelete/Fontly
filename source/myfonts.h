#ifndef MYFONTS_H
#define MYFONTS_H

#include <QWidget>

namespace Ui {
class myfonts;
}

class myfonts : public QWidget
{
    Q_OBJECT

public:
    explicit myfonts(QWidget *parent = 0);
    ~myfonts();

private:
    Ui::myfonts *ui;
};

#endif // MYFONTS_H
