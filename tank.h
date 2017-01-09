#ifndef TANK_H
#define TANK_H

#include<QGraphicsRectItem>
#include<QKeyEvent>
#include<QGraphicsScene>
#include<QObject>

class Tank:public QObject,public QGraphicsRectItem{
    Q_OBJECT
public:
    void keyPressEvent(QKeyEvent*event);
public slots:
    void spawn();
};

#endif // TANK_H
