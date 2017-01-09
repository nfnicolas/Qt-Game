#ifndef BULLET_H
#define BULLET_H

#include<QGraphicsRectItem>
#include<QTimer>
#include<QObject>
#include<QList>
#include<typeinfo>

class Bullet:public QObject,public QGraphicsRectItem{
    Q_OBJECT
public:
    Bullet();
public slots:
    void move();
};

#endif // BULLET_H
