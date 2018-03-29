#ifndef ROOM_H
#define ROOM_H
#include <bits/stdc++.h>
#include <windows.h>
#include "Agent.h"
#include "object.h"
#include "props.h"
#include "treasure.h"
#include "fixed_props.h"

using namespace std;
class Monster;
class Player;
class room
{
    public:
        room(string x,string y,fixed_props z[],int nz,props g[],int ng);
        room();
        string getName();
        string getDescription();
        void link(room *r,string direction);
        void printlinked();
        room * getlinked(string direction);
        bool operator ==(room x);
        void enter(Agent *a);
        void leave(Agent *a);
        void printOccupants(Agent *a);
        int get_no();
        void print_props();
        void print_fixed();
        void take_prop(string x);
        void drop_prop(string x);
        void use_prop(string x,props arr[],int &k);
        bool is_there(string x);
        bool is_there_a_player();
        bool dfs(room* P);
        room*getdirection();
        set<Agent*>getoccupants();
        bool is_there_a_monster();
    private:
        string name;
        string discription;
        int number_of_linked_rooms;
        map<string,room*> exits;
        set<Agent*> occupants;
        object * nprops[5000];
        object * fprops[5000];
        object * treasures;
        int number_of_occupants;
        int number_of_props;
        int number_of_fprops;





};

#endif
