//#include "mainwindow.h"
#include <QApplication>
#include <QLabel>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    QLabel myLabel("hello world!");
    myLabel.show();

    return a.exec();
}
