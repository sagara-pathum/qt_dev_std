#include "mainwindow.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication app = QApplication(argc, argv);
    MainWindow w = MainWindow(NULL);
    w.show();
    app.exec();
    return 0;
}
