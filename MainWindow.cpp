#include <QApplication>
#include <QDebug>
#include "MainWindow.h"

MainWindow::MainWindow() : QWidget(0)
{
    menuBar = new QMenuBar();
    fileMenu = new QMenu("File");

    action = new QAction("Action", fileMenu);
    fileMenu->addAction(action);

    exitAction = new QAction("Exit", fileMenu);
    exitAction->setShortcut(QKeySequence(Qt::CTRL + Qt::Key_Q));
    fileMenu->addSeparator();
    fileMenu->addAction(exitAction);

    menuBar->addMenu(fileMenu);
    statusBar = new QStatusBar();

    view = new Game();

    layout = new QVBoxLayout();
    layout->setContentsMargins(0, 0, 0, 0);
    layout->setSpacing(0);
    layout->addWidget(menuBar);
    layout->addWidget(view);
    layout->addWidget(statusBar);

    this->setLayout(layout);
    this->setMinimumSize(400, 300);

    qDebug() << "GraphicsView Size: " << view->size().width() << " - " << view->size().height();

    // connections list
    connect(exitAction, SIGNAL(triggered()), QApplication::instance(), SLOT(quit()));
}

