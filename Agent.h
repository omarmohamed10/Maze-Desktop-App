#ifndef AGENT_H
#define AGENT_H
#include <bits/stdc++.h>

using namespace std;
class room;
class Agent
{
    public:
        Agent();
        virtual bool act()=0;
        string getName();
        bool gettype();
        bool getalive();
    protected:
        room *current_room;
        string name;
        bool type;
        bool Alive;

};

#endif // AGENT_H
