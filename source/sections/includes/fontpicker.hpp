#ifndef FONTPICKER_H
#define FONTPICKER_H

#include <QLabel>
#include <QFontDatabase>
#include <QColorDialog>

#include "core/shadow.hpp"

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
    void setCustomText(QString);
    void searchForFonts(QString);
    void setTextSize(int);
    void setTextColor();
    void setBackgroundColor();
    void resetSettings();

private:
    void addItemsToTextScroll(int);

    Ui::fontpicker *ui;
    shadow *setShadow;

    QList<QString> fontsList;
    QFont textLabel_FONT;
    int textSizeChanger_defaultVALUE;
};

#endif // FONTPICKER_H
