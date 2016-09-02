#include "iguanawindow.h"
#include <QApplication>
#include <QtWidgets>

int main(int argc, char *argv[])
{
    Q_INIT_RESOURCE(iguanaserver);

    QApplication a(argc, argv);
    QApplication::setQuitOnLastWindowClosed(false);

    IguanaWindow w;
    return a.exec();
}
