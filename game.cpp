
#include"game.h"
#include"enemy.h"
#include<QImage>

Game::Game(QWidget *parent)
{
    //create scene
    scene=new QGraphicsScene();
     scene->setSceneRect(0,0,1000,800);
    scene->setBackgroundBrush(QBrush(QImage(":/image/Parket.jpg")));


    QGraphicsView*view=new QGraphicsView(this);
    view->setScene(scene);
    view->setFixedSize(1000,800);
    view->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
    view->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);


    //create tank
    tank=new Tank();
    tank->setRect(0,0,30,60);
    tank->setBrush(QBrush(Qt::green));
    tank->setPos(view->width()/2,view->height()-tank->rect().height());
    tank->setFlag(QGraphicsItem::ItemIsFocusable);
    tank->setFocus();
    scene->addItem(tank);

    //create spawn
    QTimer*timer=new QTimer();
     QObject::connect(timer,SIGNAL(timeout()),tank,SLOT(spawn()));
    timer->start(4000);

    view->show();
}
