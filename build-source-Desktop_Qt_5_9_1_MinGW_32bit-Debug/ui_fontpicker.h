/********************************************************************************
** Form generated from reading UI file 'fontpicker.ui'
**
** Created by: Qt User Interface Compiler version 5.9.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FONTPICKER_H
#define UI_FONTPICKER_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_fontpicker
{
public:
    QListWidget *textScroll;
    QFrame *toolsArea;
    QPushButton *textColor;
    QPushButton *textBackgroundColor;
    QPushButton *resetSettings;
    QFrame *searchIconBackground;
    QLineEdit *fontApply;
    QLineEdit *search;
    QSlider *textSizeChanger;

    void setupUi(QWidget *fontpicker)
    {
        if (fontpicker->objectName().isEmpty())
            fontpicker->setObjectName(QStringLiteral("fontpicker"));
        fontpicker->resize(1020, 630);
        textScroll = new QListWidget(fontpicker);
        textScroll->setObjectName(QStringLiteral("textScroll"));
        textScroll->setGeometry(QRect(0, 100, 1080, 530));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(textScroll->sizePolicy().hasHeightForWidth());
        textScroll->setSizePolicy(sizePolicy);
        toolsArea = new QFrame(fontpicker);
        toolsArea->setObjectName(QStringLiteral("toolsArea"));
        toolsArea->setGeometry(QRect(-260, 0, 1280, 100));
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
        searchIconBackground->setGeometry(QRect(845, 30, 55, 40));
        searchIconBackground->setStyleSheet(QStringLiteral(""));
        searchIconBackground->setFrameShape(QFrame::StyledPanel);
        searchIconBackground->setFrameShadow(QFrame::Raised);
        fontApply = new QLineEdit(toolsArea);
        fontApply->setObjectName(QStringLiteral("fontApply"));
        fontApply->setGeometry(QRect(280, 30, 335, 40));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(fontApply->sizePolicy().hasHeightForWidth());
        fontApply->setSizePolicy(sizePolicy1);
        fontApply->setStyleSheet(QLatin1String("color: rgba(0, 0, 0, .6);\n"
"padding-left: 12px;\n"
"padding-right: 12px;\n"
"\n"
""));
        search = new QLineEdit(toolsArea);
        search->setObjectName(QStringLiteral("search"));
        search->setGeometry(QRect(675, 30, 171, 40));
        sizePolicy1.setHeightForWidth(search->sizePolicy().hasHeightForWidth());
        search->setSizePolicy(sizePolicy1);
        search->setStyleSheet(QLatin1String("color: rgba(0, 0, 0, .6);\n"
"padding-left: 12px;\n"
"padding-right: 12px;\n"
""));
        textSizeChanger = new QSlider(toolsArea);
        textSizeChanger->setObjectName(QStringLiteral("textSizeChanger"));
        textSizeChanger->setGeometry(QRect(940, 40, 90, 21));
        textSizeChanger->setOrientation(Qt::Horizontal);
        textColor->raise();
        textBackgroundColor->raise();
        resetSettings->raise();
        fontApply->raise();
        search->raise();
        textSizeChanger->raise();
        searchIconBackground->raise();

        retranslateUi(fontpicker);

        QMetaObject::connectSlotsByName(fontpicker);
    } // setupUi

    void retranslateUi(QWidget *fontpicker)
    {
        fontpicker->setWindowTitle(QApplication::translate("fontpicker", "Form", Q_NULLPTR));
        textColor->setText(QString());
        textBackgroundColor->setText(QString());
        resetSettings->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class fontpicker: public Ui_fontpicker {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FONTPICKER_H
