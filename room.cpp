#include "room.h"
#include <bits/stdc++.h>
using namespace std;
room ::room()
{
    number_of_linked_rooms=0;
    number_of_occupants=0;
}


room::room(string x ,string y,fixed_props z[],int nz,props g[],int ng)
{
    name=x;
    discription=y;
    number_of_linked_rooms=0;
    number_of_occupants=0;
    for(int i=0; i<nz; i++)
    {
        fprops[i]=&z[i];
    }
    for(int i=0; i<ng; i++)
    {
        nprops[i]=(&g[i]);
    }
    number_of_props=ng;
    number_of_fprops=nz;
}



string room :: getName()
{

    return name;
}

string room ::getDescription()
{
    return discription;
}

void room :: link(room *r,string x)
{

    exits[x]=r;
    number_of_linked_rooms++;
    if(x=="North")
    {
        r->exits["South"]=this;
    }
    else if(x=="South")
    {
        r->exits["North"]=this;
    }
    else if(x=="West")
    {
        r->exits["East"]=this;
    }
    else if(x=="East")
    {
        r->exits["West"]=this;
    }
    r->number_of_linked_rooms++;
}

room* room :: getlinked(string x)
{

    for( map<string,room*>::iterator it=exits.begin(); it!=exits.end(); it++)
    {

        if(it->first ==x)
        {
            return (it->second);
        }
    }
    return this;

}
void room :: printlinked()
{
    int i=0;
    for(map<string,room*>::iterator it=exits.begin(); it!=exits.end(); it++)
    {
        cout<<"-----,,";
        cout<<"There's an exit to the"<<it->first<<" ("<<it->second->getName()<<") ";
        cout<<"-----,,";
        if(i<number_of_linked_rooms-1)
        {
            cout<<"and";
            i++;
        }
        cout<<endl<<endl;

    }
}
bool room :: operator ==(room x)
{
    if(x.name==name&&x.discription==discription)
    {
        return true;
    }
    else return false;
}

void room ::enter(Agent *a)
{
    occupants.insert(a);
    number_of_occupants++;
}
void room ::leave(Agent *a)
{
    //set<Agent *>::iterator iter = occupants.find(a);
    occupants.erase(occupants.find(a));
    number_of_occupants--;

}
void room::printOccupants(Agent *a)
{
    set<Agent*>::iterator it;
    if(number_of_occupants==1)
    {
        string w="You see no creatures here.";
        for(auto ch:w)
        {
            cout<<ch;
            Sleep(50);
        }
        return;
    }
    cout<<endl;
    cout << "You see :" << endl;
    for (it=occupants.begin(); it!=occupants.end(); ++it)
    {
        if(occupants.find(a)==it)
        {
            continue;
        }
        Agent *x=*it;
        cout<<x->getName()<<endl;
    }
}

int room ::get_no()
{

    return number_of_occupants ;
}
void room::print_props()
{   cout<<endl<<"the props you can take :"<<endl;
    for(int i=0; i<number_of_props; i++)
    {
        cout<<nprops[i]->getname()<<endl;
    }
}
void room::print_fixed()
{   cout<<endl<<"the fixed props are : "<<endl;
    for(int i=0; i<number_of_fprops; i++)
    {
        cout<<fprops[i]->getname()<<endl;
    }
}
void room :: drop_prop(string x)
{
    props *p=new props(x);
    nprops[number_of_props++]=p;
}
void room :: take_prop(string x)
{
    for(int i=0; i<number_of_props; i++)
    {
        if(nprops[i]->getname()==x)
        {
            nprops[i]->setname("");
            for(int j=i; j<number_of_props-1; j++)
            {
                swap(nprops[j],nprops[j+1]);
            }
            number_of_props--;
            break;
        }
    }
}

bool room ::is_there(string x)
{
    for(int i=0; i<number_of_props; i++)
    {
        if(x==nprops[i]->getname())
        {
            return true;
        }
    }
    for(int i=0; i<number_of_fprops; i++)
    {
        if(x==fprops[i]->getname())
        {
            return true;
        }
    }
    return false;
}





void room ::use_prop(string x, props arr[],int &k)
{
    for(int i=0; i<number_of_fprops; i++)
    {
        if(fprops[i]->getname()==x)
        {
            for(int j=0; j<8; j++)
            {
                if(fprops[i]->getrequirement()==arr[j].getname()||fprops[i]->getrequirement()=="Nothing")
                {
                    cout<<endl;
                    string x="Yes,you can use it \n\n";
                    for(auto ch:x)
                    {
                        cout<<ch;
                        Sleep(200);
                    }
                    if(fprops[i]->getwhat()=="room"||fprops[i]->getwhat()=="usage")
                    {
                        return ;
                    }
                    cout<<"there's "<<fprops[i]->getwhat()<<" in the "<<fprops[i]->getname()<<endl;
                    if(fprops[i]->getwhat()=="Nothing")
                    {
                        cout<<"there's nothing here"<<endl;
                        return;
                    }
                    string check="wanna take it(them) !?(Yes or No)";
                    for(auto ch:check)
                    {
                        cout<<ch;
                        Sleep(100);
                    }
                    string q;
                    cin>>q;
                    if(q=="Yes")
                    {
                        if(k==8)
                        {
                            string p="sorry you can't take it ";
                            for(auto ch:p)
                            {
                                cout<<ch;
                                Sleep(100);
                            }
                            return;
                        }
                        props b(fprops[i]->getwhat());
                        arr[k++]=b;
                        fprops[i]->setrequirement("Nothing");
                        fprops[i]->setwhat("Nothing");
                        cout<<"you have taken it"<<endl;
                        return;


                    }
                    else if(q=="No")
                    {
                        return ;
                    }

                }
                else{
                    cout<<"Sorry you can't use it sir."<<endl;
                    return;
                }
            }
        }
    }
}
bool room::is_there_a_player()
{   set<Agent*>::iterator it;
    for (it=occupants.begin(); it!=occupants.end(); ++it)
    {
      if((*it)->gettype()==true) return true;
    }

    return false;

}
bool room::is_there_a_monster()
{   set<Agent*>::iterator it;
    for (it=occupants.begin(); it!=occupants.end()&&*it!=NULL; ++it)
    {
      if((*it)->gettype()==false) return true;
    }

    return false;

}
bool room ::dfs(room* x)
{
    bool any = false;
	map <string,room*>::iterator it;
	any = this->is_there_a_player();
	it = exits.begin();
	while(it!=exits.end())
	{
		if(it->second != NULL && it->second != x)
			any = any || it->second->dfs(this);
		it++;
	}
	return any;
}
room * room ::getdirection(){

    map <string,room*>::iterator it ;
	it = exits.begin();
	while(it!=exits.end())
	{
		if(it->second != NULL)
			if(it->second->dfs(this))
				return it->second ;
		it++;
	}
}
set<Agent*> room::getoccupants(){
return occupants;}
