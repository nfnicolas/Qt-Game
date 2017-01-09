#include"enemy.h"

Enemy::Enemy(){
    int numX=rand()%1000;
    int numY=rand()%800;
    setPos(numX,numY);
    setRect(0,0,30,50);
    this->setBrush(QBrush(Qt::blue));

    QTimer*timer=new QTimer;
    connect(timer,SIGNAL(timeout()),this,SLOT(move()));
    timer->start(50);

}

void Enemy::move(){
    setPos(x(),y()+5);

    if(pos().y()+rect().height()<0){
         scene()->removeItem(this);
         delete this;
     }

}
