#ifndef FONTLY_H
#define FONTLY_H

#include <QMouseEvent>
#include <QDesktopServices>
#include <QUrl>

#include "sections/includes/fontpicker.hpp"
#include "core/shadow.hpp"

namespace Ui {
class fontly;
}

class sections;

class fontly : public QWidget
{
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
    void on_websiteButton_clicked();

private:
    void open_url(QString URL);
    void updateBottomBorderPosition(int windowHeight);
    void setBottomBorderPosition(int newPosition);

    Ui::fontly *ui;
    QPoint dragPosition;

    fontpicker fontpickerTab;
    shadow *setShadow;
};

#endif // FONTLY_H
