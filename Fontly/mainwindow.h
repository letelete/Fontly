#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private:
    void mousePressEvent(QMouseEvent *event) override;
    void mouseMoveEvent(QMouseEvent *event) override;

private slots:

    void on_maximize_clicked();

    void on_fontApply_textChanged();

    void on_textSizeChanger_valueChanged(int value);

    void on_textColor_clicked();

    void on_textBackgroundColor_clicked();

    void on_resetSettings_clicked();

    void on_myFontsButton_clicked();

private:
    Ui::MainWindow *ui;
    QPoint dragPosition;
};

#endif // MAINWINDOW_H
