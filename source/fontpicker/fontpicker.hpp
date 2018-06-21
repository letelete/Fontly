#ifndef FONTPICKER_H
#define FONTPICKER_H

#include <QColorDialog>
#include <QFontDatabase>
#include <QLabel>
#include <QListWidgetItem>

#include "core/const_data.hpp"
#include "core/shadow.hpp"

namespace Ui {
class fontpicker;
}

class fontpicker : public QWidget {
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
  const_data *data;

  QList<QString> fontsList;
  QFont textLabel_FONT;

  void addFontLabelToScrollView(int fontNumber);
  void connectUiElementsWithSlots();
  void setDefaultValuesForTextSizeChanger();
  void setPlaceholdersForUiElements();

  QStringList getLocalFontsList();
};

#endif // FONTPICKER_H
