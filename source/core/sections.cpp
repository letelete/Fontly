#include "core/sections.hpp"

sections::sections(QLabel *FPL, QLabel *MFL, QLabel *SL,
                   QFrame *FPI, QFrame *FPIA,
                   QFrame *MFI, QFrame *MFIA,
                   QFrame *SI, QFrame *SIA,
                   QObject *parent = nullptr) : QObject(parent)
{
    fontPickerLabel = FPL;
    myFontsLabel = MFL;
    settingsLabel = SL;

    fontPickerIcon = FPI;
    fontPickerIsActive = FPIA;

    myFontsIcon = MFI;
    myFontsIsActive = MFIA;

    settingsIcon = SI;
    settingsIsActive = SIA;
}

void sections::paintSection(QLabel *label, QFrame *icon, QFrame *bgr, QString image_src, bool isTabActive)
{
    auto textColor = isTabActive ? "color: rgba(255, 255, 255, 0.9)" : "color: rgba(255, 255, 255, 0.5)";
    auto backgroundColor = isTabActive ? "background-color: #191d20" : "#37474f";

    auto FILE_FORMAT = ".svg";
    auto PATH = "image: url(:/assets/icons/" + image_src + FILE_FORMAT + ")";

    label->setStyleSheet( textColor );
    icon->setStyleSheet( PATH );
    bgr->setStyleSheet( backgroundColor );
}

void sections::setTabStyle(int currentIndex)
{
    std::array<QLabel*, 3> tab_labels {{ fontPickerLabel, myFontsLabel, settingsLabel }};

    std::array<QFrame*, 6> tab_frames {{ fontPickerIcon, fontPickerIsActive,
                                         myFontsIcon, myFontsIsActive,
                                         settingsIcon, settingsIsActive }};

    std::array<QString, 6> tab_imageNames {{ "fontpicker","myfonts", "settings",
                                             "fontpickerACTIVE", "myfontsACTIVE", "settingsACTIVE" }};

    auto k = 0;
    for(int i = 0; i < 3; i++)
    {
        bool isTabActive =  (currentIndex - 1 == i) ? true : false;
        int imageNumber = isTabActive ? i+3 : i;

        paintSection( tab_labels[ static_cast<size_t>(i) ],
                      tab_frames[ static_cast<size_t>(k) ],
                      tab_frames[ static_cast<size_t>(k+1) ],
                      tab_imageNames[ static_cast<size_t>(imageNumber) ],
                      isTabActive );
        k += 2;
    }
}
