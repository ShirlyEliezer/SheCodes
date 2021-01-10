#include "mainwindow.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    // listen to any event on the app
    QApplication a(argc, argv);
    FinancialManagement w;

    // start the main event
    w.show();
    return a.exec();
}
