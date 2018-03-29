#include "Monster.h"
#include <iostream>
#include <bits/stdc++.h>

using namespace std;
Monster::Monster()
{
 type=false;
 Alive=1;
}
Monster::Monster(string x,room *starting_room){
    name=x;
    current_room=starting_room;
    current_room->enter(this);
    type=false;
    Alive=1;
}
void Monster :: if_alive(){
if(type==1&&Alive==1){
    set<Agent*>::iterator it;
    for (it=current_room->getoccupants().begin(); it!=current_room->getoccupants().end(); ++it)
    {
        if((*it)->gettype()==0){
            cout<<"You are Dead,.. my friend"<<endl;
            Alive=0;


        }
    }

}


}

bool Monster ::act(){
    int n = rand() % 4;
    string dir;
    if(n==0){dir="North";}
    else if(n==1){dir="South";}
    else if(n==2){dir="West";}
    else if(n==3){dir="East";}
    if((current_room->getlinked(dir))->get_no()+1==4 || (current_room->getlinked(dir))==current_room){
        return true;
    }
    current_room->leave(this);
    current_room=current_room->getlinked(dir);
    current_room->enter(this);
    return true;
}
