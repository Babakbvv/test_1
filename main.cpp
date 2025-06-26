#include "mainwindow.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    cout<<"hello word;
    if(1){
        cout<<"hello";
        }
    MainWindow w;
    w.show();
    return a.exec();
}
