#include "core/fontly_main.hpp"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    fontly w;
    w.show();

    return a.exec();
}
