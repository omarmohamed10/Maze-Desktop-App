#include "intel_monster.h"

intel_monster::intel_monster()
{
     type=0;
     Alive=1;
}
intel_monster::intel_monster(string x,room *starting_room){
    name=x;
    current_room=starting_room;
    current_room->enter(this);
    type=0;
    Alive=1;

}


bool intel_monster::act(){
    current_room->leave(this);
    current_room=current_room->getdirection();
    if(current_room->get_no()+1==4){
        return true;
    }
    current_room->enter(this);
    return true;
   /* int Monster ::BFS(Room *the_current_room){
    queue<Room *>q;// just to make sure that all the current children of the graph in the same level
    q.push(the_current_room); // our first parent :"D
    Room *visited_array[1000] = {};//just to avoid infinite cycle and the most important part :"D
    memset(visited_array,NULL,sizeof visited_array);
    int result = 0 ;
    while(q.size()){
        int currentLevel=q.size();
        while(currentLevel--){
            Room *r=q.front();
            q.pop();
            for(int i = 0 ; i < r->occupants.size(); ++i){
                if(r->occupants[i]->TypeCheck()!="Monster")return result;
                /*this two loop check if the children of the current level

         /*   }
            if(visited_array[r->n]!=NULL)continue;
            visited_array[r->n]=the_current_room;
          /*  if(r->directions["east"]!=NULL)q.push(r->directions["east"]);
            if(r->directions["west"]!=NULL)q.push(r->directions["west"]);
            if(r->directions["south"]!=NULL)q.push(r->directions["south"]);
            if(r->directions["north"]!=NULL)q.push(r->directions["north"]);
        }
        result++;
    }
    return 1e9;
}

*/

}





