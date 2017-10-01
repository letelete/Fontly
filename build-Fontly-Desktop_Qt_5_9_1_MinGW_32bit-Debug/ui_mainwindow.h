/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.9.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QFrame *actionButtonsArea;
    QPushButton *close;
    QPushButton *maximize;
    QPushButton *minimize;
    QFrame *toolsArea;
    QPushButton *textColor;
    QPushButton *textBackgroundColor;
    QPushButton *resetSettings;
    QFrame *searchIconBackground;
    QFrame *appNameBackground;
    QLabel *fontlyLabel;
    QLineEdit *fontApply;
    QLineEdit *search;
    QFrame *authorArea;
    QFrame *leftPanelArea;
    QLabel *menuLabel;
    QFrame *fontPickerIcon;
    QLabel *fontPickerLabel;
    QLabel *fontPickerLabel_2;
    QFrame *myFontsIcon;
    QLabel *fontPickerLabel_3;
    QFrame *settingsIcon;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->setWindowModality(Qt::NonModal);
        MainWindow->resize(1280, 720);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(MainWindow->sizePolicy().hasHeightForWidth());
        MainWindow->setSizePolicy(sizePolicy);
        MainWindow->setMinimumSize(QSize(288, 144));
        MainWindow->setMaximumSize(QSize(1280, 720));
        MainWindow->setAcceptDrops(false);
        MainWindow->setStyleSheet(QLatin1String("/*start - QPushButton Styling */\n"
"\n"
"QPushButton#close {\n"
"	image: url(:/rsc/close.png);\n"
"}\n"
"QPushButton#maximize {\n"
"	image: url(:/rsc/maximize.png)\n"
"}\n"
"QPushButton#minimize {\n"
"	image: url(:/rsc/minimize.png);\n"
"}\n"
"QPushButton#textColor {\n"
"	image: url(:/rsc/textColor.png);\n"
"}\n"
"QPushButton#textBackgroundColor {\n"
"	image: url(:/rsc/textBackgroundColor.png);\n"
"}\n"
"QPushButton#resetSettings {\n"
"	image: url(:/rsc/resetSettings.png);\n"
"}\n"
"\n"
"QFrame{\n"
"	background-color: rgba(0,0,0,0);\n"
"}\n"
"QFrame#fontPickerIcon {\n"
"	image: url(:/rsc/fontpicker.png);\n"
"}\n"
"QFrame#myFontsIcon {\n"
"	image: url(:/rsc/myfonts.png);\n"
"}\n"
"QFrame#settingsIcon {\n"
"	image: url(:/rsc/settings.png);\n"
"}\n"
"/*end - QPushButton Styling */\n"
"\n"
"\n"
"/* start - coloring*/\n"
"\n"
"/* LIGHTER */\n"
"QFrame#authorArea, QFrame#toolsArea {\n"
"	background-color: rgb(55, 71, 79);\n"
"}\n"
"\n"
"/* DARKER */\n"
"QFrame#leftPanelArea {\n"
"	background-color: rgb(245, 245, 24"
                        "5);\n"
"}\n"
"/* WHITE */\n"
"QTextEdit, QLineEdit { \n"
"	background-color: #fff;\n"
"}\n"
"/* ORANGE ACCENT ELEMENTS */\n"
"QFrame#searchIconBackground, QFrame#appNameBackground{\n"
"	background-color: #e74c3c;\n"
"}\n"
"/* end - coloring */\n"
"\n"
"/*start - Rounded*/\n"
"\n"
"/*double side*/\n"
"QLineEdit#fontApply {\n"
"	border-color: rgba(0,0,0,0);\n"
"    border-radius: 20%;\n"
"}\n"
"\n"
"/*right side*/\n"
"QFrame#appNameBackground, QFrame#searchIconBackground {\n"
"	border-color:rgba(0,0,0,0);\n"
"	border-top-right-radius: 20%;\n"
"	border-bottom-right-radius: 20%;\n"
"}\n"
"\n"
"/*left side*/\n"
"QLineEdit#search{\n"
"	border-color:rgba(0,0,0,0);\n"
"	border-top-left-radius: 20%;\n"
"	border-bottom-left-radius: 20%;\n"
"}\n"
"\n"
"\n"
"/*end Rounded*/"));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        actionButtonsArea = new QFrame(centralWidget);
        actionButtonsArea->setObjectName(QStringLiteral("actionButtonsArea"));
        actionButtonsArea->setGeometry(QRect(0, 0, 1280, 41));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(actionButtonsArea->sizePolicy().hasHeightForWidth());
        actionButtonsArea->setSizePolicy(sizePolicy1);
        actionButtonsArea->setStyleSheet(QStringLiteral("background-color: rgb(38, 50, 56);"));
        actionButtonsArea->setFrameShape(QFrame::StyledPanel);
        actionButtonsArea->setFrameShadow(QFrame::Raised);
        close = new QPushButton(actionButtonsArea);
        close->setObjectName(QStringLiteral("close"));
        close->setGeometry(QRect(1250, 10, 21, 21));
        close->setStyleSheet(QStringLiteral("background-color: rgba(255, 255, 255, 0);"));
        maximize = new QPushButton(actionButtonsArea);
        maximize->setObjectName(QStringLiteral("maximize"));
        maximize->setGeometry(QRect(1220, 10, 21, 21));
        maximize->setStyleSheet(QStringLiteral("background-color: rgba(255, 255, 255, 0);"));
        minimize = new QPushButton(actionButtonsArea);
        minimize->setObjectName(QStringLiteral("minimize"));
        minimize->setGeometry(QRect(1190, 10, 21, 21));
        minimize->setStyleSheet(QStringLiteral("background-color: rgba(255, 255, 255, 0);"));
        minimize->raise();
        maximize->raise();
        close->raise();
        toolsArea = new QFrame(centralWidget);
        toolsArea->setObjectName(QStringLiteral("toolsArea"));
        toolsArea->setGeometry(QRect(0, 40, 1280, 100));
        toolsArea->setFrameShape(QFrame::StyledPanel);
        toolsArea->setFrameShadow(QFrame::Raised);
        textColor = new QPushButton(toolsArea);
        textColor->setObjectName(QStringLiteral("textColor"));
        textColor->setGeometry(QRect(1075, 35, 30, 30));
        textColor->setStyleSheet(QStringLiteral("background-color: rgba(255, 255, 255, 0);"));
        textBackgroundColor = new QPushButton(toolsArea);
        textBackgroundColor->setObjectName(QStringLiteral("textBackgroundColor"));
        textBackgroundColor->setGeometry(QRect(1125, 35, 30, 30));
        textBackgroundColor->setStyleSheet(QStringLiteral("background-color: rgba(255, 255, 255, 0);"));
        resetSettings = new QPushButton(toolsArea);
        resetSettings->setObjectName(QStringLiteral("resetSettings"));
        resetSettings->setGeometry(QRect(1175, 30, 40, 40));
        resetSettings->setStyleSheet(QStringLiteral("background-color: rgba(255, 255, 255, 0);"));
        searchIconBackground = new QFrame(toolsArea);
        searchIconBackground->setObjectName(QStringLiteral("searchIconBackground"));
        searchIconBackground->setGeometry(QRect(965, 30, 55, 40));
        searchIconBackground->setStyleSheet(QStringLiteral("image: url(:/rsc/search.png);"));
        searchIconBackground->setFrameShape(QFrame::StyledPanel);
        searchIconBackground->setFrameShadow(QFrame::Raised);
        appNameBackground = new QFrame(toolsArea);
        appNameBackground->setObjectName(QStringLiteral("appNameBackground"));
        appNameBackground->setGeometry(QRect(0, 25, 130, 50));
        appNameBackground->setFrameShape(QFrame::StyledPanel);
        appNameBackground->setFrameShadow(QFrame::Raised);
        fontlyLabel = new QLabel(appNameBackground);
        fontlyLabel->setObjectName(QStringLiteral("fontlyLabel"));
        fontlyLabel->setGeometry(QRect(0, 4, 131, 41));
        fontlyLabel->setStyleSheet(QLatin1String("font: 25 20pt \"Lato Light\";\n"
"color: rgb(255, 255, 255);"));
        fontApply = new QLineEdit(toolsArea);
        fontApply->setObjectName(QStringLiteral("fontApply"));
        fontApply->setGeometry(QRect(375, 30, 335, 40));
        fontApply->setStyleSheet(QLatin1String("color: rgba(0, 0, 0, .6);\n"
"padding-left: 10px;\n"
"padding-right: 10px;\n"
"font: 25 14pt \"Lato Light\";"));
        search = new QLineEdit(toolsArea);
        search->setObjectName(QStringLiteral("search"));
        search->setGeometry(QRect(795, 30, 170, 40));
        search->setStyleSheet(QLatin1String("color: rgba(0, 0, 0, .6);\n"
"padding-left: 10px;\n"
"padding-right: 10px;\n"
"font: 25 14pt \"Lato Light\";"));
        authorArea = new QFrame(centralWidget);
        authorArea->setObjectName(QStringLiteral("authorArea"));
        authorArea->setGeometry(QRect(0, 670, 260, 50));
        authorArea->setFrameShape(QFrame::StyledPanel);
        authorArea->setFrameShadow(QFrame::Raised);
        leftPanelArea = new QFrame(centralWidget);
        leftPanelArea->setObjectName(QStringLiteral("leftPanelArea"));
        leftPanelArea->setGeometry(QRect(0, 140, 260, 530));
        leftPanelArea->setFrameShape(QFrame::StyledPanel);
        leftPanelArea->setFrameShadow(QFrame::Raised);
        menuLabel = new QLabel(leftPanelArea);
        menuLabel->setObjectName(QStringLiteral("menuLabel"));
        menuLabel->setGeometry(QRect(35, 50, 61, 21));
        menuLabel->setStyleSheet(QLatin1String("font: 57 16pt \"Lato Medium\";\n"
"color: rgba(0, 0, 0, .5);"));
        fontPickerIcon = new QFrame(leftPanelArea);
        fontPickerIcon->setObjectName(QStringLiteral("fontPickerIcon"));
        fontPickerIcon->setGeometry(QRect(50, 110, 25, 25));
        fontPickerIcon->setFrameShape(QFrame::StyledPanel);
        fontPickerIcon->setFrameShadow(QFrame::Raised);
        fontPickerLabel = new QLabel(leftPanelArea);
        fontPickerLabel->setObjectName(QStringLiteral("fontPickerLabel"));
        fontPickerLabel->setGeometry(QRect(100, 112, 121, 21));
        fontPickerLabel->setStyleSheet(QLatin1String("font: 16pt \"Lato\";\n"
"color: rgba(0, 0, 0, .3);"));
        fontPickerLabel_2 = new QLabel(leftPanelArea);
        fontPickerLabel_2->setObjectName(QStringLiteral("fontPickerLabel_2"));
        fontPickerLabel_2->setGeometry(QRect(100, 152, 121, 21));
        fontPickerLabel_2->setStyleSheet(QLatin1String("font: 16pt \"Lato\";\n"
"color: rgba(0, 0, 0, .3);"));
        myFontsIcon = new QFrame(leftPanelArea);
        myFontsIcon->setObjectName(QStringLiteral("myFontsIcon"));
        myFontsIcon->setGeometry(QRect(50, 150, 25, 25));
        myFontsIcon->setFrameShape(QFrame::StyledPanel);
        myFontsIcon->setFrameShadow(QFrame::Raised);
        fontPickerLabel_3 = new QLabel(leftPanelArea);
        fontPickerLabel_3->setObjectName(QStringLiteral("fontPickerLabel_3"));
        fontPickerLabel_3->setGeometry(QRect(100, 180, 121, 41));
        fontPickerLabel_3->setStyleSheet(QLatin1String("font: 16pt \"Lato\";\n"
"color: rgba(0, 0, 0, .3);"));
        settingsIcon = new QFrame(leftPanelArea);
        settingsIcon->setObjectName(QStringLiteral("settingsIcon"));
        settingsIcon->setGeometry(QRect(50, 190, 25, 25));
        settingsIcon->setFrameShape(QFrame::StyledPanel);
        settingsIcon->setFrameShadow(QFrame::Raised);
        menuLabel->raise();
        fontPickerIcon->raise();
        fontPickerLabel->raise();
        fontPickerLabel_2->raise();
        myFontsIcon->raise();
        fontPickerLabel_3->raise();
        settingsIcon->raise();
        MainWindow->setCentralWidget(centralWidget);
        actionButtonsArea->raise();
        toolsArea->raise();
        authorArea->raise();
        leftPanelArea->raise();
        fontApply->raise();

        retranslateUi(MainWindow);
        QObject::connect(close, SIGNAL(clicked()), MainWindow, SLOT(close()));
        QObject::connect(minimize, SIGNAL(clicked()), MainWindow, SLOT(showMinimized()));

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "Fontly", Q_NULLPTR));
        close->setText(QString());
        maximize->setText(QString());
        minimize->setText(QString());
        textColor->setText(QString());
        textBackgroundColor->setText(QString());
        resetSettings->setText(QString());
        fontlyLabel->setText(QApplication::translate("MainWindow", "<html><head/><body><p align=\"center\">Fontly</p></body></html>", Q_NULLPTR));
        menuLabel->setText(QApplication::translate("MainWindow", "Menu", Q_NULLPTR));
        fontPickerLabel->setText(QApplication::translate("MainWindow", "Font Picker", Q_NULLPTR));
        fontPickerLabel_2->setText(QApplication::translate("MainWindow", "My Fonts", Q_NULLPTR));
        fontPickerLabel_3->setText(QApplication::translate("MainWindow", "Settings", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
