#ifndef PLAYER_H
#define PLAYER_H
#include "room.h"
#include "Agent.h"
#include "props.h"
#include "object.h"
#include "treasure.h"
#include "fixed_props.h"
#include <bits/stdc++.h>
using namespace std;
class Player:public Agent
{
    public:
        Player();
        Player(string x,room *starting_room);
        bool act();
    private:
        props carried[8];
        int number_of_carried;
        bool findone_piece();

};

#endif // PLAYER_H
