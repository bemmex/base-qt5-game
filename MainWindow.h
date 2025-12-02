#pragma once

#include <QWidget>
#include <QMenuBar>
#include <QVBoxLayout>
#include <QStatusBar>
#include <QGraphicsScene>
#include <QGraphicsView>
#include <QGraphicsRectItem>

#include "Game.h"

class MainWindow : public QWidget
{
    Q_OBJECT

    private:

        QMenuBar *menuBar;
        QMenu *fileMenu;

        QAction *action;
        QAction *exitAction;
        
        QStatusBar *statusBar;

        QGraphicsView *view;
        QVBoxLayout *layout;
        
    public:
        MainWindow();
        
};


