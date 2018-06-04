#ifndef FONTPICKER_H
#define FONTPICKER_H

#include <QLabel>
#include <QFontDatabase>
#include <QColorDialog>
#include <QListWidgetItem>

#include "core/shadow.hpp"
#include "core/jsonwrapper.hpp"

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
    Ui::fontpicker *ui;
    shadow *setShadow;
    jsonWrapper *stringsWrapper;
    jsonWrapper *colorsWrapper;

    QList<QString> fontsList;
    QFont textLabel_FONT;

    void addFontLabelToScrollView(int fontNumber);
    void connectUiElementsWithSlots();
    void setDefaultValuesForTextSizeChanger();
    void setPlaceholdersForUiElements();

    QStringList getLocalFontsList();

    static const int DEFAULT_FONTS_TEXT_SIZE = 40;
    static const int DEFAULT_SLIDER_POSITION = DEFAULT_FONTS_TEXT_SIZE;
    static const int DEFAULT_TEXT_LABEL_SIZE = DEFAULT_FONTS_TEXT_SIZE + 30;
    static const int SIZE_CHANGER_MIN_RANGE = 20;
    static const int SIZE_CHANGER_MAX_RANGE = 150;
};

#endif // FONTPICKER_H
