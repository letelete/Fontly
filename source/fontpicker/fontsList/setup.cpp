#include "setup.hpp"
#include "ui_fontpicker.h"

setUp::setUp() :
    public fontpicker
{

}

void fontpicker::addFontLabelToScrollView(int fontNumber)
{
    QString fontInfoLabel_TEXT = fontsList[fontNumber] + "   |   " + QString::number(DEFAULT_FONTS_TEXT_SIZE) + " px";

    QListWidgetItem *fontInfoLabel = new QListWidgetItem( fontInfoLabel_TEXT );
    QListWidgetItem *textLabel = new QListWidgetItem(stringsWrapper->getElementFromObject("defaultTextPresence"));

    QColor textColor(0,0,0,200);
    QSize textLabel_SIZE(0, DEFAULT_TEXT_LABEL_SIZE);

    QFont fontInfo_FONT("Roboto", 10);
    QColor fontInfo_BACKGROUNDCOLOR(245, 245, 245);
    QSize fontInfoLabel_SIZE(1000,40);

    textLabel_FONT.setPixelSize(DEFAULT_FONTS_TEXT_SIZE);
    textLabel->setSizeHint(textLabel_SIZE);
    textLabel->setForeground(textColor);
    textLabel_FONT.setFamily(fontsList[fontNumber]);
    textLabel->setFont(textLabel_FONT);


    fontInfoLabel->setSizeHint(fontInfoLabel_SIZE);
    fontInfoLabel->setBackgroundColor(fontInfo_BACKGROUNDCOLOR);
    fontInfoLabel->setForeground(textColor);
    fontInfoLabel->setFont(fontInfo_FONT);

    ui->fontsList->addItem(fontInfoLabel );
    ui->fontsList->addItem(textLabel);
}
