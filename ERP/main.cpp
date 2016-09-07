#include "mainwindow.h"
#include <QApplication>

#include "parameterhandler.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    parameterHandler ph;

    mainWindow w;
    w.setWindowName(ph.getProgramName());
    w.show();
    return a.exec();
}
