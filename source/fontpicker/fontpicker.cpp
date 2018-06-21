#include "fontpicker/fontpicker.hpp"
#include "ui_fontpicker.h"

fontpicker::fontpicker(QWidget *parent)
    : QWidget(parent), ui(new Ui::fontpicker) {
  ui->setupUi(this);

  data = new const_data();

  connectUiElementsWithSlots();
  setDefaultValuesForTextSizeChanger();
  setPlaceholdersForUiElements();

  QColor darkShadowColor(0, 0, 0, 100);
  setShadow = new shadow(5, 1, 2, darkShadowColor, this);
  ui->toolsArea->setGraphicsEffect(setShadow->effect);

  fontsList = getLocalFontsList();
  for (int fontNumber = 0; fontNumber < fontsList.length(); fontNumber++)
    if (QFontDatabase().isSmoothlyScalable(fontsList[fontNumber]))
      addFontLabelToScrollView(fontNumber);
}

void fontpicker::connectUiElementsWithSlots() {
  connect(ui->fontApply, SIGNAL(textChanged(QString)), this,
          SLOT(setCustomText(QString)));
  connect(ui->search, SIGNAL(textChanged(QString)), this,
          SLOT(searchForFonts(QString)));
  connect(ui->textSizeChanger, SIGNAL(valueChanged(int)), this,
          SLOT(setTextSize(int)));
  connect(ui->textColor, SIGNAL(clicked(bool)), this, SLOT(setTextColor()));
  connect(ui->textBackgroundColor, SIGNAL(clicked(bool)), this,
          SLOT(setBackgroundColor()));
  connect(ui->resetSettings, SIGNAL(clicked(bool)), this,
          SLOT(resetSettings()));
}

void fontpicker::setDefaultValuesForTextSizeChanger() {
  ui->textSizeChanger->setRange(data->getMinRangeOfTextSizeChanger(),
                                data->getMaxRangeOfTextSizeChanger());
  ui->textSizeChanger->setValue(data->getDefaultSliderPosition());
  ui->textSizeChanger->setSliderPosition(data->getDefaultSliderPosition());
}

void fontpicker::setPlaceholdersForUiElements() {
  ui->search->setPlaceholderText(data->getSearchPlaceholder());
  ui->fontApply->setPlaceholderText(data->getTextPresencePlaceholder());
}

QStringList fontpicker::getLocalFontsList() {
  return QFontDatabase().families();
}

void fontpicker::setCustomText(QString str) {
  auto listLength = ui->fontsList->count();
  for (auto i = 1; i < listLength; i += 2)
      ui->fontsList->item(i)->setText(str);
}

void fontpicker::addFontLabelToScrollView(int fontNumber) {
  QString fontInfoLabel_TEXT = fontsList[fontNumber] + "   |   " +
                               QString::number(data->getDefaultFontsTextSize()) + " px";

  QListWidgetItem *fontInfoLabel = new QListWidgetItem(fontInfoLabel_TEXT);
  QListWidgetItem *textLabel =
      new QListWidgetItem(data->getDefaultTextPresence());

  QColor textColor(0, 0, 0, 200);
  QSize textLabel_SIZE(0, data->getDefaultTextLabelSize());

  QFont fontInfo_FONT("Roboto", 10);
  QColor fontInfo_BACKGROUNDCOLOR(245, 245, 245);
  QSize fontInfoLabel_SIZE(1000, 40);

  textLabel_FONT.setPixelSize(data->getDefaultFontsTextSize());
  textLabel->setSizeHint(textLabel_SIZE);
  textLabel->setForeground(textColor);
  textLabel_FONT.setFamily(fontsList[fontNumber]);
  textLabel->setFont(textLabel_FONT);

  fontInfoLabel->setSizeHint(fontInfoLabel_SIZE);
  fontInfoLabel->setBackgroundColor(fontInfo_BACKGROUNDCOLOR);
  fontInfoLabel->setForeground(textColor);
  fontInfoLabel->setFont(fontInfo_FONT);

  ui->fontsList->addItem(fontInfoLabel);
  ui->fontsList->addItem(textLabel);
}

void fontpicker::searchForFonts(QString str) {
  for (auto i = 1; i < ui->fontsList->count(); i += 2) {
    if (ui->fontsList->item(i)->isHidden()) {
      ui->fontsList->item(i - 1)->setHidden(false);
      ui->fontsList->item(i)->setHidden(false);
    }

    if (!(ui->fontsList->item(i)->font().family().contains(
            (str), Qt::CaseInsensitive))) {
      ui->fontsList->item(i - 1)->setHidden(true);
      ui->fontsList->item(i)->setHidden(true);
    }
  }
}

void fontpicker::setTextSize(int value) {
  QFont textFont;
  textFont.setPixelSize(value);

  for (auto i = 0; i < ui->fontsList->count(); i++) {
    if (i % 2 == 0) {
      QString fontInfoLabel_TEXT =
          ui->fontsList->item(i + 1)->font().family() + "  |  " +
          QString::number(textFont.pixelSize()) + " px";
      ui->fontsList->item(i)->setText(fontInfoLabel_TEXT);
    } else {
      textFont.setFamily(ui->fontsList->item(i)->font().family());
      QSize fontsList_SIZE(
          0, textFont.pixelSize() + (data->getDefaultFontsTextSize() * 90 / 100));

      ui->fontsList->item(i)->setSizeHint(fontsList_SIZE);
      ui->fontsList->item(i)->setFont(textFont);
    }
  }
}

void fontpicker::setTextColor() {
  QColor color =
      QColorDialog::getColor(QColor(ui->fontsList->item(1)->textColor()), this,
                             data->getForegroundColorDialogTitle());

  if (color.isValid())
    for (auto i = 1; i < ui->fontsList->count(); i += 2)
      ui->fontsList->item(i)->setTextColor(color);
}

void fontpicker::setBackgroundColor() {
  QColor color =
      QColorDialog::getColor(QColor(ui->fontsListBackground->palette().color(
                                 ui->fontsList->backgroundRole())),
                             this, data->getBackgroundColorDialogTitle())
          .toHsv();
  QColor contrastBackgroundColor =
      color.value() < 60 ? color.darker(60) : color.darker(110);
  QColor contrastTextColor(33, 33, 33);

  if (color.isValid()) {
    QString sheet =
        QString::fromLatin1("background-color: %1 }").arg(color.name());
    ui->fontsListBackground->setStyleSheet(sheet);

    if (((((contrastBackgroundColor.hue() >= 190) &&
           (contrastBackgroundColor.hue() <= 359)) ||
          ((contrastBackgroundColor.hue() >= 0) &&
           (contrastBackgroundColor.hue() <= 45))) &&
         ((contrastBackgroundColor.saturation() <= 255) &&
          (contrastBackgroundColor.saturation() >= 100))) ||
        ((contrastBackgroundColor.value() >= 60) &&
         (contrastBackgroundColor.value() <= 180))) {
      contrastTextColor = QColor(220, 220, 220);
    }

    else if (contrastBackgroundColor.value() < 60) {
      contrastTextColor = QColor(150, 150, 150);
    }

    else if (contrastBackgroundColor.value() > 220) {
      contrastTextColor = QColor(85, 85, 85);
    }

    for (auto i = 0; i < ui->fontsList->count(); i += 2) {
      ui->fontsList->item(i)->setTextColor(contrastTextColor);
      ui->fontsList->item(i)->setBackgroundColor(contrastBackgroundColor);
    }
  }
}

void fontpicker::resetSettings() {
  QFont textFont;
  QColor textColor(0, 0, 0, 200);
  QSize fontsList_defaultSize(0, data->getDefaultTextLabelSize());
  QString fontsList_defaultBackground("background-color: rgb(255, 255, 255);");

  ui->textSizeChanger->setValue(data->getDefaultFontsTextSize());
  ui->textSizeChanger->setSliderPosition(data->getDefaultSliderPosition());
  textFont.setPixelSize(data->getDefaultFontsTextSize());
  ui->fontsListBackground->setStyleSheet(fontsList_defaultBackground);

  for (int i = 0; i < ui->fontsList->count(); i += 2) {
    ui->fontsList->item(i)->setBackgroundColor(QColor(245, 245, 245));
    ui->fontsList->item(i)->setTextColor(textColor);

    textFont.setFamily(ui->fontsList->item(i + 1)->font().family());
    ui->fontsList->item(i + 1)->setFont(textFont);
    ui->fontsList->item(i + 1)->setTextColor(textColor);
    ui->fontsList->item(i + 1)->setSizeHint(fontsList_defaultSize);
  }
}

fontpicker::~fontpicker() {
  delete ui;
  delete setShadow;
}
