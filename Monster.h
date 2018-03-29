#ifndef MONSTER_H
#define MONSTER_H
#include <iostream>
#include "room.h"
#include "Agent.h"
using namespace std;


class Monster:public Agent
{
    public:
        Monster();
        Monster(string name,room *starting_room);
        bool act();
        void if_alive();


};

#endif // MONSTER_H
