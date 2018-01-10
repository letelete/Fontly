#ifndef SECTIONS_HPP
#define SECTIONS_HPP

#include <QtWidgets>

class sections : public QObject
{
    Q_OBJECT;

public:
    sections(QLabel *FPL, QLabel *MFL, QLabel *SL,
             QFrame *FPI, QFrame *FPIA,
             QFrame *MFI, QFrame *MFIA,
             QFrame *SI, QFrame *SIA,
             QObject *parent);

public slots:
    void paintSection(QLabel *label, QFrame *icon, QFrame *bgr, QString image_src, bool isTabActive);
    void setTabStyle(int currentIndex);

private:
    QLabel *fontPickerLabel;
    QLabel *myFontsLabel;
    QLabel *settingsLabel;

    QFrame *fontPickerIcon;
    QFrame *fontPickerIsActive;
    QFrame *myFontsIcon;
    QFrame *myFontsIsActive;
    QFrame *settingsIcon;
    QFrame *settingsIsActive;

};

#endif // SECTIONS_HPP
