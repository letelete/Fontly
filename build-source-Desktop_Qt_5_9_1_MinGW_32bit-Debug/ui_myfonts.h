/********************************************************************************
** Form generated from reading UI file 'myfonts.ui'
**
** Created by: Qt User Interface Compiler version 5.9.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MYFONTS_H
#define UI_MYFONTS_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_myfonts
{
public:

    void setupUi(QWidget *myfonts)
    {
        if (myfonts->objectName().isEmpty())
            myfonts->setObjectName(QStringLiteral("myfonts"));
        myfonts->resize(400, 300);

        retranslateUi(myfonts);

        QMetaObject::connectSlotsByName(myfonts);
    } // setupUi

    void retranslateUi(QWidget *myfonts)
    {
        myfonts->setWindowTitle(QApplication::translate("myfonts", "Form", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class myfonts: public Ui_myfonts {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MYFONTS_H
