#include <QMessageBox>
#include <QApplication>
#include "connection.h"
#include "mainwindow.h" // Assuming your MainWindow class is defined in this header file

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    a.setStyle("fusion");

    Connection c;
    bool test = c.createconnect();

    if (test) {
        // Connection successful, create the MainWindow
        MainWindow w;

        // Show the MainWindow
        w.show();

    }

    return a.exec();
}
