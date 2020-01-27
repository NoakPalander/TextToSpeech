#include "mainwindow.hpp"
#include <QApplication>
#include <QStyleFactory>
#include <QStyle>
#include <QFile>
#include <QTextStream>
#include <iostream>

int main(int argc, char** argv) {
    QApplication app(argc, argv);

    MainWindow w;
    w.show();

    return app.exec();
}
