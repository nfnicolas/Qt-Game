#include"tank.h"
#include"bullet.h"
#include"enemy.h"
#include"game.h"
#include<QTransform>

void Tank::keyPressEvent(QKeyEvent *event)
{
    //move tank
    if(event->key()==Qt::Key_Left){
        if(pos().x()>0)
        setPos(x()-10,y());
    }
    else if(event->key()==Qt::Key_Right){
        if(pos().x()+100<1060)
        setPos(x()+10,y());
    }
   else if(event->key()==Qt::Key_Up){
        if(pos().y()>0)
        setPos(x(),y()-10);
    }
    else if(event->key()==Qt::Key_Down){
        if(pos().y()+100<850)
        setPos(x(),y()+10);
    }
    else if(event->key()==Qt::Key_C){
        setRotation(90);
    }

    //create bullet
    else if(event->key()==Qt::Key_Space){
        Bullet*bullet=new Bullet;
        bullet->setPos(x(),y());
        scene()->addItem(bullet);
    }

}

void Tank::spawn()
{
    Enemy*enemy=new Enemy();

    scene()->addItem(enemy);
}
