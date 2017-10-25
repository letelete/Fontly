#ifndef FONTPICKER_H
#define FONTPICKER_H

#include <QWidget>

#include <QScrollArea>
#include <QVBoxLayout>
#include <QHBoxLayout>
#include <QLabel>
#include <QFontDatabase>
#include <QString>
#include <QSize>
#include <QLine>
#include <QColorDialog>
#include <QPalette>

namespace Ui {
class fontpicker;
}

class fontpicker : public QWidget
{
    Q_OBJECT

public:
    explicit fontpicker(QWidget *parent = 0);
    ~fontpicker();

private slots:
    void on_fontApply_textChanged();
    void on_textSizeChanger_valueChanged(int value);
    void on_textColor_clicked();
    void on_textBackgroundColor_clicked();
    void on_resetSettings_clicked();
    void on_search_textChanged();

    void addItems_to_textScroll(int);

private:
    Ui::fontpicker *ui;
    QList<QString> fontsList;
    QFont textLabel_FONT;
    unsigned int textSizeChanger_DVALUE;
};

#endif // FONTPICKER_H
