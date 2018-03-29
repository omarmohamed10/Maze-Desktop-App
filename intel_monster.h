#ifndef INTEL_MONSTER_H
#define INTEL_MONSTER_H
#include "Agent.h"
#include "room.h"
#include <bits/stdc++.h>
using namespace std;
class intel_monster: public Agent
{
    public:
        intel_monster();
        intel_monster(string x,room *starting_room);
        bool act();
        void if_alive();

};

#endif // INTEL_MONSTER_H
