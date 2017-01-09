#include"bullet.h"
#include"tank.h"
#include"enemy.h"
#include<QDebug>


Bullet::Bullet(){
    setRect(0,0,10,10);

    QTimer*timer=new QTimer;
    connect(timer,SIGNAL(timeout()),this,SLOT(move()));
    timer->start(50);
}
void Bullet::move(){
    //kill enemy
    QList<QGraphicsItem*>lst=collidingItems();
    for(int i=0,n=lst.size();i<n;++i){
        if(typeid(*(lst[i]))==typeid(Enemy)){
            scene()->removeItem(lst[i]);
            scene()->removeItem(this);

            delete lst[i];
            delete this;
            return;
        }
    }

    //move bullet
 setPos(x(),y()-20);
 if(pos().y()+rect().height()<0){
     scene()->removeItem(this);
     delete this;
 qDebug()<<"bullet delete";
 }
}
