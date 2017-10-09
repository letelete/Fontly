#ifndef FONTLY_H
#define FONTLY_H

#include <QWidget>
#include <QMouseEvent>
#include <QUrl>
#include <QDesktopServices>
#include <QString>

#include "fontpicker.h"
#include "myfonts.h"
#include "settings.h"

namespace Ui {
class fontly;
}

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
    void on_close_clicked();
    void on_maximize_clicked();
    void on_minimize_clicked();

    void on_fontPickerButton_clicked();
    void on_myFontsButton_clicked();
    void on_settingsButton_clicked();

    void on_githubButton_clicked();
    void on_facebookButton_clicked();
    void on_websiteButton_clicked();

private:
    Ui::fontly *ui;
    QPoint dragPosition;
    QString url;

    fontpicker fontpickerTab;
    myfonts myfontsTab;
    settings settingsTab;
};

#endif // FONTLY_H
