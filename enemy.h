#ifndef ENEMY_H
#define ENEMY_H
#include <QGraphicsRectItem>
#include <QObject>
#include "castle.h"
#include "fence.h"
#include<QTimer>
#include "node.h"
class Enemy:public QObject , public QGraphicsPixmapItem
{
    Q_OBJECT
public:
    Enemy(int d);
    void Die();
    void DecreaseHealth(int d);


    std::vector<node*> dijkstra(node* start, node* end);
    ~Enemy();
private:
    int enemyRow;
    int enemyCol;
    std::vector<node*> path;
    int damage;
    bool continuemove;
    int health;
    bool enemydied;
    QTimer* MoveTimer;
    int itr;

     node* currNode;
    float dX, dY;
    float distance;
public slots:
    void move();

};

#endif // ENEMY_H
