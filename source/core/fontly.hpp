#ifndef FONTLY_H
#define FONTLY_H

#include <QDesktopServices>
#include <QMouseEvent>
#include <QUrl>

#include "core/jsonwrapper.hpp"
#include "core/shadow.hpp"
#include "fontpicker/fontpicker.hpp"

namespace Ui {
class fontly;
}

class sections;

class fontly : public QWidget {
  Q_OBJECT

public:
  explicit fontly(QWidget *parent = 0);
  ~fontly();

protected:
  void mousePressEvent(QMouseEvent *event);
  void mouseMoveEvent(QMouseEvent *event);

private slots:
  void resizeWindowDependlyOnCurrentSize();
  void on_githubButton_clicked();

private:
  Ui::fontly *ui;
  QPoint dragPosition;

  fontpicker fontpickerTab;
  shadow *setShadow;
  jsonWrapper *stringsWrapper;

  void open_url(QString URL);
  void updateBottomBorderPosition(int windowHeight);
  void setBottomBorderPosition(int newPosition);
};

#endif // FONTLY_H
