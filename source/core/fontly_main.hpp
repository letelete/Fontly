#ifndef FONTLY_H
#define FONTLY_H

#include <QMouseEvent>
#include <QDesktopServices>
#include <QUrl>

#include "sections/includes/fontpicker.hpp"
#include "sections/includes/myfonts.hpp"
#include "sections/includes/settings.hpp"

#include "core/sections.hpp"
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
    void resizeWindow();

    void on_fontPickerButton_clicked();
    void on_myFontsButton_clicked();
    void on_settingsButton_clicked();
    void on_githubButton_clicked();
    void on_websiteButton_clicked();

private:
    void open_url(QString URL);
    void setCurrentWindowIndex(int);

    Ui::fontly *ui;
    QPoint dragPosition;

    fontpicker fontpickerTab;
    myfonts myfontsTab;
    settings settingsTab;

    sections *sectionTabs;
    shadow *setShadow;
};

#endif // FONTLY_H
