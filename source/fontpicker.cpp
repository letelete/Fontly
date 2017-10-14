#include "fontpicker.h"
#include "ui_fontpicker.h"

fontpicker::fontpicker(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::fontpicker)
{
    ui->setupUi(this);

    // ----------------------------------- CONFIG -------------------------------------

    textSizeChanger_DVALUE = 60;

    ui->textSizeChanger->setValue(textSizeChanger_DVALUE);
    ui->textSizeChanger->setSliderPosition(textSizeChanger_DVALUE);
    ui->textSizeChanger->setRange(20,150);

    fontsList = QFontDatabase().families();
    textLabel_FONT.setPixelSize(textSizeChanger_DVALUE);
    ui->fontApply->setPlaceholderText("Type something here..");
    ui->search->setPlaceholderText("Search..");
    ui->textScroll->setStyleSheet("left: 20px; padding-left: 20px; padding-top: 20px");

    // ------------------------------ CREATING A LIST ---------------------------------

    for(int i=0; i<fontsList.length(); i++)
    {
        QListWidgetItem *fontInfoLabel = new QListWidgetItem(QString(fontsList[i]) + "   |   " + QString::number(textSizeChanger_DVALUE));
        QListWidgetItem *textLabel = new QListWidgetItem("Have a great day!");

        textLabel->setSizeHint(QSize(0,textSizeChanger_DVALUE+50));
        textLabel->setForeground(QColor(0,0,0,200));
        textLabel_FONT.setFamily(fontsList[i]);
        textLabel->setFont(textLabel_FONT);

        fontInfoLabel->setSizeHint(QSize(1000,40));
        fontInfoLabel->setBackgroundColor(QColor(245,245,245));
        fontInfoLabel->setForeground(QColor(0,0,0,100));
        fontInfoLabel->setFont(QFont("Roboto", 10));

        ui->textScroll->addItem(fontInfoLabel);
        ui->textScroll->addItem(textLabel);
    }
}

fontpicker::~fontpicker()
{
    delete ui;
}

// ------------------------------------- BUTTONS -------------------------------------

void fontpicker::on_fontApply_textChanged()
{
    for(int i=1; i<ui->textScroll->count(); i += 2)
    {
        ui->textScroll->item(i)->setText(ui->fontApply->text());
    }
}

void fontpicker::on_textSizeChanger_valueChanged(int value)
{
    QFont textFont;
    textFont.setPixelSize(value);

    for(int i=0; i<ui->textScroll->count(); i ++)
    {
        if(i == 0 || i % 2 == 0)
        {
            ui->textScroll->item(i)->setText(ui->textScroll->item(i+1)->font().family() + "  |  " + QString::number(textFont.pixelSize()) + " px");
        }
        else
        {
            textFont.setFamily(ui->textScroll->item(i)->font().family());
            ui->textScroll->item(i)->setSizeHint(QSize(0,textFont.pixelSize()+50));
            ui->textScroll->item(i)->setFont(textFont);
        }
    }
}

void fontpicker::on_textColor_clicked()
{
    QColor color = QColorDialog::getColor(QColor(ui->textScroll->item(1)->textColor()), this, "Choose text color");

    QString appSheet  = QString::fromLatin1("QListView::item:selected{color: %1 }").arg(color.name());
            appSheet += QString::fromLatin1("QListView::item:selected:active{color: %1 }").arg(color.name());
            appSheet += QString::fromLatin1("QListView::item:selected:!active{color: %1 }").arg(color.name());
            appSheet += QString::fromLatin1("QListView::item:hover{color: %1 }").arg(color.name());

    ui->textScroll->setStyleSheet(appSheet);

    if(color.isValid())
    {
        for(int i=1; i<ui->textScroll->count(); i += 2)
        {
            ui->textScroll->item(i)->setTextColor(color);
        }
    }
}

void fontpicker::on_textBackgroundColor_clicked()
{
    QColor color = QColorDialog::getColor(QColor(ui->textScroll->palette().color(ui->textScroll->backgroundRole())), this, "Choose background color").toHsv();
    QColor contrastBackgroundColor = color.value() < 60 ? color.darker(60) : color.darker(110);
    QColor contrastTextColor = QColor(33,33,33);

    if(color.isValid())
    {
        QString sheet = QString::fromLatin1("padding-left: 20px; background-color: %1 }").arg(color.name());
        ui->textScroll->setStyleSheet(sheet);

        if( (( ((contrastBackgroundColor.hue() >= 190) && (contrastBackgroundColor.hue() <= 359))
            || ((contrastBackgroundColor.hue() >= 0) && (contrastBackgroundColor.hue() <= 45)))
            && ((contrastBackgroundColor.saturation() <= 255) && (contrastBackgroundColor.saturation() >= 100)))
            || ((contrastBackgroundColor.value() >= 60) && (contrastBackgroundColor.value() <= 180)) )
        {
            contrastTextColor = QColor(220,220,220);
        }
        else if(contrastBackgroundColor.value() < 60)
        {
            contrastTextColor = QColor(150,150,150);
        }
        else if(contrastBackgroundColor.value() > 220)
        {
            contrastTextColor = QColor(85,85,85);
        }
        for(int i=0; i<ui->textScroll->count(); i += 2)
        {
            ui->textScroll->item(i)->setTextColor(contrastTextColor);
            ui->textScroll->item(i)->setBackgroundColor(contrastBackgroundColor);
        }
    }
}

void fontpicker::on_resetSettings_clicked()
{
    QFont textFont;                                                                             //
    ui->textSizeChanger->setValue(textSizeChanger_DVALUE);                                      //  reset slider value
    ui->textSizeChanger->setSliderPosition(textSizeChanger_DVALUE);                             //  reset slider position
    textFont.setPixelSize(ui->textSizeChanger->value());                                        //  reset font size
                                                                                                //
    for(int i=0; i<ui->textScroll->count(); i ++)                                               //
    {                                                                                           //
        if(i == 0 || i % 2 == 0)
        {
            ui->textScroll->item(i)->setBackgroundColor(QColor(245, 245, 245));                 //  reset font info panel background
            ui->textScroll->item(i)->setTextColor(QColor(0,0,0,100));                           //  reset font info panel text color
        }
        else
        {
            textFont.setFamily(ui->textScroll->item(i)->font().family());                       //  reset font size
            ui->textScroll->item(i)->setFont(textFont);                                         //  reset font size
            ui->textScroll->item(i)->setTextColor(QColor(0,0,0,200));                           //  reset text color
            ui->textScroll->item(i)->setSizeHint(QSize(0, textSizeChanger_DVALUE + 50));        //  reset QListWidgetItem size policy
        }
    }

    ui->textScroll->setStyleSheet("padding-left: 20px; background-color: rgb(255, 255, 255);"); //  reset background color
    qApp->setStyleSheet("QListView::item:selected{color: rgba(0,0,0,200)}"                      // reset on hover, active, !active etc..
                        "QListView::item:selected:!active{color: rgba(0,0,0,200)}"
                        "QListView::item:selected:active{color: rgba(0,0,0,200)}"
                        "QListView::item:hover{color: rgba(0,0,0,200)}");
}

