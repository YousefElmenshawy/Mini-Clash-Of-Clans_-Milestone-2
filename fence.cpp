#include "fence.h"
#include"game.h"
extern Game *g;
Fence::Fence() {
    dontincrease=false;
    health = 50;
    costToPass=60;
    QPixmap fencephoto (":/new/images/images/fence.png");
    fencephoto=fencephoto.scaledToWidth(75);
    fencephoto=fencephoto.scaledToHeight(75);
    setPixmap(fencephoto);
    name = "fence";
}

void Fence::DecreaseHealth(int d){
    dontincrease=true;
    health-=d;
    costToPass-=d;
    if(health<0)
        health=0;
    if(costToPass<10)
        costToPass=10;
    if(health==0)
    Die();
    dontincrease=false;
}

void Fence::Die(){
    qDebug()<<"fence died";
        name="emptyland";
        scene()->removeItem(this);
}

void Fence::increaseHealth()
{
    if(!dontincrease){
    health+=1;
    costToPass+=1;
    if(health>50)
        health=10;
    if(costToPass>60)
        costToPass=60;}
}
