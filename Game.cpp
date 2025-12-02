#include <QGraphicsRectItem>
#include <QGraphicsEllipseItem>
#include <QStyleOptionGraphicsItem>
#include <QKeyEvent>
#include <QDebug>
#include "Game.h"

Game::Game(QGraphicsView* parent) : QGraphicsView(parent)
{
    scene = new QGraphicsScene();

    scene->setSceneRect(0,0,GAME_WIDTH, GAME_HEIGHT);

    setScene(scene); // That connects the view with the scene

    qDebug() << "GraphicsScene Size: " << scene->width() << " - " << scene->height();

    init();
}

void Game::init()
{
    QGraphicsRectItem *rect = new QGraphicsRectItem(250, 250, 80, 50);
    rect->setBrush(Qt::blue);
    rect->setPen(QPen(QBrush(Qt::red), 5));

    scene->addItem(new QGraphicsRectItem(10, 10, 200, 100));
    scene->addItem(rect);
    scene->addItem(new QGraphicsEllipseItem(150, 150, 100, 60));
}

void Game::keyPressEvent(QKeyEvent *e)
{
    //key w
    if(e->key() == Qt::Key_W){
        zoomIn();
    }
    //key s
    if(e->key() == Qt::Key_S){
        zoomOut();
    }
    //key a
    if(e->key() == Qt::Key_A){
        rotateLeft();
    }
    //key d
    if(e->key() == Qt::Key_D){
        rotateRight();
    }
}