#ifndef ENEMY_H
#define ENEMY_H

#include"bullet.h"
#include"game.h"
#include<QGraphicsRectItem>
#include<QObject>
#include<QTimer>
#include<stdio.h>

class Enemy:public QObject, public QGraphicsRectItem
{
    Q_OBJECT
public:
    Enemy();
public slots:
    void move();
};

#endif // ENEMY_H
