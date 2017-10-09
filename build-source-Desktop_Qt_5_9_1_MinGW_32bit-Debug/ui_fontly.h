/********************************************************************************
** Form generated from reading UI file 'fontly.ui'
**
** Created by: Qt User Interface Compiler version 5.9.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FONTLY_H
#define UI_FONTLY_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_fontly
{
public:
    QFrame *leftPanelArea;
    QLabel *menuLabel;
    QFrame *fontPickerIcon;
    QLabel *fontPickerLabel;
    QLabel *myFontsLabel;
    QFrame *myFontsIcon;
    QLabel *settingsLabel;
    QFrame *settingsIcon;
    QLabel *socialLabel;
    QLabel *githubLabel;
    QLabel *facebookLabel;
    QFrame *socialWebsiteIcon;
    QFrame *socialGithubIcon;
    QLabel *websiteLabel;
    QFrame *socialFacebookIcon;
    QPushButton *fontPickerButton;
    QPushButton *myFontsButton;
    QPushButton *settingsButton;
    QPushButton *facebookButton;
    QPushButton *githubButton;
    QPushButton *websiteButton;
    QFrame *fontPickerIsActive;
    QFrame *myFontsIsActive;
    QFrame *settingsIsActive;
    QFrame *bottomBorder;
    QFrame *actionButtonsArea;
    QPushButton *close;
    QPushButton *maximize;
    QPushButton *minimize;
    QFrame *toolsArea;
    QFrame *appNameBackground;
    QLabel *fontlyLabel;
    QFrame *appBackgroundPanel;
    QStackedWidget *currentWindow;
    QWidget *welcomeWindow;

    void setupUi(QWidget *fontly)
    {
        if (fontly->objectName().isEmpty())
            fontly->setObjectName(QStringLiteral("fontly"));
        fontly->resize(1280, 720);
        fontly->setStyleSheet(QLatin1String("/* FONT *\n"
"/* app name */\n"
"QLabel#fontlyLabel{\n"
"	font: 75 18pt \"Roboto\";\n"
"}\n"
"/* text inputs */\n"
"QLineEdit#fontApply, QLineEdit#search {\n"
"	font: 57 14pt \"Roboto\";\n"
"}\n"
"/* sections */\n"
"QLabel#menuLabel , QLabel#socialLabel {\n"
"	font: 57 14pt \"Roboto Medium\";\n"
"}\n"
"/* subsections */\n"
"QLabel#fontPickerLabel, QLabel#myFontsLabel, QLabel#settingsLabel, QFrame#githubLabel, QLabel#facebookLabel, QLabel#websiteLabel  {\n"
"	font: 75 13pt \"Roboto Medium\";\n"
"}\n"
"\n"
"\n"
"/* ICONS */\n"
"QPushButton#close {\n"
"	image: url(:/assets/icons/closeINNACTIVE.png);\n"
"}\n"
"QPushButton#maximize {\n"
"	image: url(:/assets/icons/maximizeINNACTIVE.png);\n"
"}\n"
"QPushButton#minimize {\n"
"	image: url(:/assets/icons/minimizeINNACTIVE.png);\n"
"}\n"
"QPushButton#textColor {\n"
"	image: url(:/assets/icons/textColor.png);\n"
"}\n"
"QPushButton#textBackgroundColor {\n"
"	image: url(:/assets/icons/textBackgroundColor.png);\n"
"}\n"
"QPushButton#resetSettings {\n"
"	image: url(:/assets/"
                        "icons/resetSettings.png);\n"
"}\n"
"QFrame#fontPickerIcon {\n"
"	image: url(:/assets/icons/fontpicker.png);\n"
"}\n"
"QFrame#myFontsIcon {\n"
"	image: url(:/assets/icons/myfonts.png);\n"
"}\n"
"QFrame#settingsIcon {\n"
"	image: url(:/assets/icons/settings.png);\n"
"}\n"
"QFrame#socialGithubIcon {\n"
"	image: url(:/assets/icons/socialGITHUB.png);\n"
"}\n"
"QFrame#socialFacebookIcon {\n"
"	image: url(:/assets/icons/socialFB.png);\n"
"}\n"
"QFrame#socialWebsiteIcon {\n"
"	image: url(:/assets/icons/socialWWW.png);\n"
"}\n"
"QFrame#welcomeWindowBackground {\n"
"	image: url(:/assets/icons/welcomeWindow.png);\n"
"}\n"
"QFrame#searchIconBackground {\n"
"	image: url(:/assets/icons/search.png);\n"
"}\n"
"/* BACKGROUND  COLOR */\n"
"\n"
"/* transparency */\n"
"QFrame, QPushButton{\n"
"	background-color: rgba(0,0,0,0);\n"
"}\n"
"/* main color: darker */\n"
"QFrame#actionButtonsArea {\n"
"	background-color: rgb(38, 50, 56);\n"
"}\n"
"/* main color: lighter */\n"
"QFrame#toolsArea, QFrame#bottomBorder {\n"
"	background-colo"
                        "r: rgb(55, 71, 79);\n"
"}\n"
"/* white */\n"
"QTextEdit, QLineEdit, QListWidget#textScroll, QFrame#appBackgroundPanel{\n"
"	background-color: rgb(255,255,255);\n"
"}\n"
"/* white but darkerr */\n"
"QFrame#leftPanelArea {\n"
"	background-color: rgb(245, 245, 245);\n"
"}\n"
"/* accent elements */\n"
"QFrame#searchIconBackground, QFrame#appNameBackground{\n"
"	background-color: #e74c3c;\n"
"}\n"
"\n"
"/* TEXT COLOR */\n"
"\n"
"/* white */\n"
"QLabel#fontlyLabel {\n"
"  color:  #fff;\n"
"}\n"
"/* white but darker */\n"
"QLabel#fontPickerLabel {\n"
"	color: rgb(245,245,245);\n"
"}\n"
"/* black 50% opacity */\n"
"QLabel#menuLabel , QLabel#socialLabel {\n"
"  color: rgba(0,0,0,.5);\n"
"}\n"
"/* black 35% opacity */\n"
"QLabel#myFontsLabel, QLabel#settingsLabel, QFrame#githubLabel, QLabel#facebookLabel, QLabel#websiteLabel , QLabel#fontPickerLabel{\n"
"  color: rgba(0,0,0,.35);\n"
"}\n"
"/* BORDER COLOR */\n"
"\n"
"/* transparent */\n"
"QListView, QPushButton {\n"
"	border: 1px solid rgba(0,0,0,0);\n"
"}\n"
"/* BORDER"
                        " RADIUS */\n"
"\n"
"/* both sides */\n"
"QLineEdit#fontApply {\n"
"    border-radius: 20%;\n"
"}\n"
"/* right side */\n"
"QFrame#searchIconBackground {\n"
"	border-top-right-radius: 20%;\n"
"	border-bottom-right-radius: 20%;\n"
"}\n"
"QFrame#appNameBackground {\n"
"	border-top-right-radius: 25%;\n"
"	border-bottom-right-radius: 25%;\n"
"}\n"
"/* left side */\n"
"QLineEdit#search {\n"
"	border-color:rgba(0,0,0,0);\n"
"	border-top-left-radius: 20%;\n"
"	border-bottom-left-radius: 20%;\n"
"}\n"
"\n"
"/* SLIDER */\n"
"QSlider::groove:horizontal {\n"
"	border-radius: 4px;\n"
"    height: 8px;\n"
"    background-color: #263238;\n"
"}\n"
"\n"
"QSlider::handle:horizontal {\n"
"    background-color: #e74c3c;\n"
"    border: 1px solid #e74c3c;\n"
"    width: 15px;\n"
"	margin: -4px 0;\n"
"    border-radius: 4px;\n"
"}\n"
"\n"
"/* ON HOVER */\n"
"QPushButton#fontPickerButton:hover, QPushButton#myFontsButton:hover, QPushButton#settingsButton:hover, QPushButton#githubButton:hover, QPushButton#facebookButton:hover, QPushBut"
                        "ton#websiteButton:hover{\n"
"	border-left: 8px solid rgb(38, 50, 56);\n"
"}\n"
"QPushButton#fontPickerButton:pressed, QPushButton#myFontsButton:pressed, QPushButton#settingsButton:pressed,QPushButton#githubButton:pressed, QPushButton#facebookButton:pressed, QPushButton#websiteButton:pressed {\n"
"  border-left: 2px solid rgb(38, 50, 56);\n"
"}\n"
"QPushButton#close:hover {\n"
"	image: url(:/assets/icons/close.png);\n"
"}\n"
"\n"
"QPushButton#maximize:hover {\n"
"	image: url(:/assets/icons/maximize.png);\n"
"}\n"
"\n"
"QPushButton#minimize:hover {\n"
"	image: url(:/assets/icons/minimize.png);\n"
"}\n"
"\n"
"QPushButton#close:pressed {\n"
"	image: url(:/assets/icons/closeINNACTIVE.png);\n"
"}\n"
"\n"
"QPushButton#maximize:pressed {\n"
"	image: url(:/assets/icons/maximizeINNACTIVE.png);\n"
"}\n"
"\n"
"QPushButton#minimize:pressed {\n"
"	image: url(:/assets/icons/minimizeINNACTIVE.png);\n"
"}"));
        leftPanelArea = new QFrame(fontly);
        leftPanelArea->setObjectName(QStringLiteral("leftPanelArea"));
        leftPanelArea->setGeometry(QRect(0, 140, 260, 530));
        leftPanelArea->setFrameShape(QFrame::StyledPanel);
        leftPanelArea->setFrameShadow(QFrame::Raised);
        menuLabel = new QLabel(leftPanelArea);
        menuLabel->setObjectName(QStringLiteral("menuLabel"));
        menuLabel->setGeometry(QRect(35, 50, 221, 21));
        menuLabel->setStyleSheet(QStringLiteral(""));
        fontPickerIcon = new QFrame(leftPanelArea);
        fontPickerIcon->setObjectName(QStringLiteral("fontPickerIcon"));
        fontPickerIcon->setGeometry(QRect(50, 103, 25, 25));
        fontPickerLabel = new QLabel(leftPanelArea);
        fontPickerLabel->setObjectName(QStringLiteral("fontPickerLabel"));
        fontPickerLabel->setGeometry(QRect(100, 105, 121, 21));
        fontPickerLabel->setStyleSheet(QStringLiteral(""));
        myFontsLabel = new QLabel(leftPanelArea);
        myFontsLabel->setObjectName(QStringLiteral("myFontsLabel"));
        myFontsLabel->setGeometry(QRect(100, 155, 121, 21));
        myFontsLabel->setStyleSheet(QStringLiteral(""));
        myFontsIcon = new QFrame(leftPanelArea);
        myFontsIcon->setObjectName(QStringLiteral("myFontsIcon"));
        myFontsIcon->setGeometry(QRect(50, 153, 25, 25));
        myFontsIcon->setFrameShape(QFrame::StyledPanel);
        myFontsIcon->setFrameShadow(QFrame::Raised);
        settingsLabel = new QLabel(leftPanelArea);
        settingsLabel->setObjectName(QStringLiteral("settingsLabel"));
        settingsLabel->setGeometry(QRect(100, 194, 121, 41));
        settingsLabel->setStyleSheet(QStringLiteral(""));
        settingsIcon = new QFrame(leftPanelArea);
        settingsIcon->setObjectName(QStringLiteral("settingsIcon"));
        settingsIcon->setGeometry(QRect(50, 203, 25, 25));
        settingsIcon->setFrameShape(QFrame::StyledPanel);
        settingsIcon->setFrameShadow(QFrame::Raised);
        socialLabel = new QLabel(leftPanelArea);
        socialLabel->setObjectName(QStringLiteral("socialLabel"));
        socialLabel->setGeometry(QRect(35, 285, 221, 21));
        socialLabel->setStyleSheet(QStringLiteral(""));
        githubLabel = new QLabel(leftPanelArea);
        githubLabel->setObjectName(QStringLiteral("githubLabel"));
        githubLabel->setGeometry(QRect(100, 340, 121, 21));
        githubLabel->setStyleSheet(QStringLiteral(""));
        facebookLabel = new QLabel(leftPanelArea);
        facebookLabel->setObjectName(QStringLiteral("facebookLabel"));
        facebookLabel->setGeometry(QRect(100, 392, 121, 21));
        facebookLabel->setStyleSheet(QStringLiteral(""));
        socialWebsiteIcon = new QFrame(leftPanelArea);
        socialWebsiteIcon->setObjectName(QStringLiteral("socialWebsiteIcon"));
        socialWebsiteIcon->setGeometry(QRect(50, 440, 25, 25));
        socialWebsiteIcon->setFrameShape(QFrame::StyledPanel);
        socialWebsiteIcon->setFrameShadow(QFrame::Raised);
        socialGithubIcon = new QFrame(leftPanelArea);
        socialGithubIcon->setObjectName(QStringLiteral("socialGithubIcon"));
        socialGithubIcon->setGeometry(QRect(45, 334, 41, 30));
        socialGithubIcon->setFrameShape(QFrame::StyledPanel);
        socialGithubIcon->setFrameShadow(QFrame::Raised);
        websiteLabel = new QLabel(leftPanelArea);
        websiteLabel->setObjectName(QStringLiteral("websiteLabel"));
        websiteLabel->setGeometry(QRect(100, 442, 121, 21));
        websiteLabel->setStyleSheet(QStringLiteral(""));
        socialFacebookIcon = new QFrame(leftPanelArea);
        socialFacebookIcon->setObjectName(QStringLiteral("socialFacebookIcon"));
        socialFacebookIcon->setGeometry(QRect(50, 390, 25, 25));
        socialFacebookIcon->setFrameShape(QFrame::StyledPanel);
        socialFacebookIcon->setFrameShadow(QFrame::Raised);
        fontPickerButton = new QPushButton(leftPanelArea);
        fontPickerButton->setObjectName(QStringLiteral("fontPickerButton"));
        fontPickerButton->setGeometry(QRect(0, 90, 260, 50));
        fontPickerButton->setStyleSheet(QStringLiteral(""));
        myFontsButton = new QPushButton(leftPanelArea);
        myFontsButton->setObjectName(QStringLiteral("myFontsButton"));
        myFontsButton->setGeometry(QRect(0, 140, 260, 50));
        myFontsButton->setStyleSheet(QStringLiteral("background-color: rgba(255, 255, 255, 0);"));
        settingsButton = new QPushButton(leftPanelArea);
        settingsButton->setObjectName(QStringLiteral("settingsButton"));
        settingsButton->setGeometry(QRect(0, 190, 260, 50));
        settingsButton->setStyleSheet(QStringLiteral("background-color: rgba(255, 255, 255, 0);"));
        facebookButton = new QPushButton(leftPanelArea);
        facebookButton->setObjectName(QStringLiteral("facebookButton"));
        facebookButton->setGeometry(QRect(0, 380, 260, 50));
        facebookButton->setStyleSheet(QStringLiteral("background-color: rgba(255, 255, 255, 0);"));
        githubButton = new QPushButton(leftPanelArea);
        githubButton->setObjectName(QStringLiteral("githubButton"));
        githubButton->setGeometry(QRect(0, 330, 260, 50));
        githubButton->setStyleSheet(QStringLiteral("background-color: rgba(255, 255, 255, 0);"));
        websiteButton = new QPushButton(leftPanelArea);
        websiteButton->setObjectName(QStringLiteral("websiteButton"));
        websiteButton->setGeometry(QRect(0, 430, 260, 50));
        websiteButton->setStyleSheet(QStringLiteral("background-color: rgba(255, 255, 255, 0);"));
        fontPickerIsActive = new QFrame(leftPanelArea);
        fontPickerIsActive->setObjectName(QStringLiteral("fontPickerIsActive"));
        fontPickerIsActive->setGeometry(QRect(0, 90, 260, 50));
        fontPickerIsActive->setFrameShape(QFrame::StyledPanel);
        fontPickerIsActive->setFrameShadow(QFrame::Raised);
        myFontsIsActive = new QFrame(leftPanelArea);
        myFontsIsActive->setObjectName(QStringLiteral("myFontsIsActive"));
        myFontsIsActive->setGeometry(QRect(0, 140, 260, 50));
        myFontsIsActive->setFrameShape(QFrame::StyledPanel);
        myFontsIsActive->setFrameShadow(QFrame::Raised);
        settingsIsActive = new QFrame(leftPanelArea);
        settingsIsActive->setObjectName(QStringLiteral("settingsIsActive"));
        settingsIsActive->setGeometry(QRect(0, 190, 260, 50));
        settingsIsActive->setFrameShape(QFrame::StyledPanel);
        settingsIsActive->setFrameShadow(QFrame::Raised);
        myFontsIsActive->raise();
        settingsIsActive->raise();
        fontPickerIsActive->raise();
        menuLabel->raise();
        fontPickerIcon->raise();
        fontPickerLabel->raise();
        myFontsLabel->raise();
        myFontsIcon->raise();
        settingsLabel->raise();
        settingsIcon->raise();
        socialLabel->raise();
        githubLabel->raise();
        facebookLabel->raise();
        socialWebsiteIcon->raise();
        socialGithubIcon->raise();
        websiteLabel->raise();
        socialFacebookIcon->raise();
        fontPickerButton->raise();
        myFontsButton->raise();
        settingsButton->raise();
        facebookButton->raise();
        githubButton->raise();
        websiteButton->raise();
        bottomBorder = new QFrame(fontly);
        bottomBorder->setObjectName(QStringLiteral("bottomBorder"));
        bottomBorder->setGeometry(QRect(0, 670, 1281, 50));
        bottomBorder->setStyleSheet(QStringLiteral("background-color: rgb(55, 71, 79);"));
        bottomBorder->setFrameShape(QFrame::StyledPanel);
        bottomBorder->setFrameShadow(QFrame::Raised);
        actionButtonsArea = new QFrame(fontly);
        actionButtonsArea->setObjectName(QStringLiteral("actionButtonsArea"));
        actionButtonsArea->setGeometry(QRect(0, 0, 1280, 40));
        actionButtonsArea->setFrameShape(QFrame::StyledPanel);
        actionButtonsArea->setFrameShadow(QFrame::Raised);
        close = new QPushButton(actionButtonsArea);
        close->setObjectName(QStringLiteral("close"));
        close->setGeometry(QRect(1240, 10, 21, 21));
        close->setStyleSheet(QStringLiteral(""));
        maximize = new QPushButton(actionButtonsArea);
        maximize->setObjectName(QStringLiteral("maximize"));
        maximize->setGeometry(QRect(1210, 10, 21, 21));
        maximize->setStyleSheet(QStringLiteral(""));
        minimize = new QPushButton(actionButtonsArea);
        minimize->setObjectName(QStringLiteral("minimize"));
        minimize->setGeometry(QRect(1180, 10, 21, 21));
        minimize->setStyleSheet(QStringLiteral(""));
        toolsArea = new QFrame(fontly);
        toolsArea->setObjectName(QStringLiteral("toolsArea"));
        toolsArea->setGeometry(QRect(0, 40, 261, 100));
        toolsArea->setFrameShape(QFrame::StyledPanel);
        toolsArea->setFrameShadow(QFrame::Raised);
        appNameBackground = new QFrame(toolsArea);
        appNameBackground->setObjectName(QStringLiteral("appNameBackground"));
        appNameBackground->setGeometry(QRect(0, 25, 130, 50));
        appNameBackground->setFrameShape(QFrame::StyledPanel);
        appNameBackground->setFrameShadow(QFrame::Raised);
        fontlyLabel = new QLabel(appNameBackground);
        fontlyLabel->setObjectName(QStringLiteral("fontlyLabel"));
        fontlyLabel->setGeometry(QRect(0, 4, 131, 41));
        appBackgroundPanel = new QFrame(fontly);
        appBackgroundPanel->setObjectName(QStringLiteral("appBackgroundPanel"));
        appBackgroundPanel->setGeometry(QRect(0, 0, 1280, 720));
        appBackgroundPanel->setMinimumSize(QSize(640, 320));
        appBackgroundPanel->setMaximumSize(QSize(1280, 720));
        appBackgroundPanel->setStyleSheet(QStringLiteral(""));
        appBackgroundPanel->setFrameShape(QFrame::StyledPanel);
        appBackgroundPanel->setFrameShadow(QFrame::Raised);
        currentWindow = new QStackedWidget(appBackgroundPanel);
        currentWindow->setObjectName(QStringLiteral("currentWindow"));
        currentWindow->setGeometry(QRect(260, 40, 1020, 630));
        welcomeWindow = new QWidget();
        welcomeWindow->setObjectName(QStringLiteral("welcomeWindow"));
        currentWindow->addWidget(welcomeWindow);
        appBackgroundPanel->raise();
        leftPanelArea->raise();
        bottomBorder->raise();
        actionButtonsArea->raise();
        toolsArea->raise();

        retranslateUi(fontly);

        currentWindow->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(fontly);
    } // setupUi

    void retranslateUi(QWidget *fontly)
    {
        fontly->setWindowTitle(QApplication::translate("fontly", "fontly", Q_NULLPTR));
        menuLabel->setText(QApplication::translate("fontly", "Menu", Q_NULLPTR));
        fontPickerLabel->setText(QApplication::translate("fontly", "Font Picker", Q_NULLPTR));
        myFontsLabel->setText(QApplication::translate("fontly", "My Fonts", Q_NULLPTR));
        settingsLabel->setText(QApplication::translate("fontly", "Settings", Q_NULLPTR));
        socialLabel->setText(QApplication::translate("fontly", "Check this project on", Q_NULLPTR));
        githubLabel->setText(QApplication::translate("fontly", "GitHub", Q_NULLPTR));
        facebookLabel->setText(QApplication::translate("fontly", "Facebook", Q_NULLPTR));
        websiteLabel->setText(QApplication::translate("fontly", "Website", Q_NULLPTR));
        fontPickerButton->setText(QString());
        myFontsButton->setText(QString());
        settingsButton->setText(QString());
        facebookButton->setText(QString());
        githubButton->setText(QString());
        websiteButton->setText(QString());
        close->setText(QString());
        maximize->setText(QString());
        minimize->setText(QString());
        fontlyLabel->setText(QApplication::translate("fontly", "<html><head/><body><p align=\"center\">Fontly</p></body></html>", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class fontly: public Ui_fontly {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FONTLY_H
