#include <QApplication>
#include <QDebug>
#include "MainWindow.h"

int main(int argc, char *argv[])
{
    QApplication app(argc, argv);

    qDebug() << "QT game template ";

    MainWindow *mainWindow = new MainWindow();
    mainWindow->show();

    return app.exec();
}
