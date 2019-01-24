#include "tvvmainwindow.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    TvvMainWindow w;
    w.show();

    return a.exec();
}
