#ifndef GAME_H
#define GAME_H

#include"tank.h"
#include"bullet.h"
#include<QGraphicsView>
#include<QGraphicsScene>
#include<QWidget>
#include<QTimer>


class Game:public QGraphicsView{

public:
    Game(QWidget*parent=0);
    QGraphicsScene*scene;
    Tank*tank;
};

#endif // GAME_H
