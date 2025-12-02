#pragma once

#include <QGraphicsView>
#include <QGraphicsScene>

class Game : public QGraphicsView
{
    Q_OBJECT

    enum {GAME_WIDTH = 744, GAME_HEIGHT = 462};

    private:
        QGraphicsScene* scene;

        void init();

    protected:
        virtual void keyPressEvent(QKeyEvent *event);

    public:
        Game(QGraphicsView* parent=0);

    public slots:
      void zoomIn() { scale(1.2, 1.2); }
      void zoomOut() { scale(1 / 1.2, 1 / 1.2); }
      void rotateLeft() { rotate(-10); }
      void rotateRight() { rotate(10); }
    
};


