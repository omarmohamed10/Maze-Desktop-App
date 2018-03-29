#include "Player.h"
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
Player::Player()
{
    type=1;
    Alive=1;
}
Player::Player(string x,room *starting_room)
{
    name=x;
    current_room=starting_room;
    current_room->enter(this);
    number_of_carried=0;
    for(int i=0; i<8; i++)
    {
        carried[i].setname("");
    }
    type=1;
    Alive=1;

}



bool Player ::act()
{   bool check_gun=false;
    for(int i=0;i<8;i++){
        if(carried[i].getname()=="Gun"){
            check_gun=true;
            break;}
    }
    if(current_room->is_there_a_monster()&&!check_gun){
    Alive=false;
    return true;
    }
    cout<<name<<", "<<"it's your turn. " << current_room->getName()<<" "<<current_room->getDescription() <<endl;
    current_room->print_fixed();
    current_room->print_props();
    current_room->printOccupants(this);
    cout<<endl;
    current_room->printlinked();

    if(number_of_carried==0)
    cout<<"you have nothing "<<endl;
    else
        for(int i=0; i<number_of_carried; i++)
        {

            cout<<carried[i].getname()<<endl;
        }
    string dir,thing;
    while(true)
    {
        if(findone_piece()==true){
        string the_end="I WILL THE PIRITE THE KING \n\n";
        for(auto ch:the_end){
            cout<<ch;
            Sleep(100);
        }
        cout<<"\a";
        cout<<"\a";
        cout<<"\a";
        cout<<"\a";
        cout<<"\a";

        return false;}
        cout<<endl;
        cout<<name<<",Wanna take or drop or use something from this room !?(Yes or No) :";
        string d;
        getline(cin,d);
        d[0]=toupper(d[0]);
        for(int i=1; i<d.size(); i++)
        {
            d[i]=tolower(d[i]);
        }
        if(d=="Yes")
        {
            cout<<endl;
            cout<<"What do you wanna do !?(Take or Use or Drop) : ";
            string d2;
        getline(cin,d2);
            if(d2=="Take")
            {
                cout<<"Enter the prop name:";
                getline(cin,thing);
                if(current_room->is_there(thing))
                {
                    props x(thing);
                    if(number_of_carried<8)
                    {
                        carried[number_of_carried++]=x;
                        //cout<<"oh .. nice "<<endl;
                        current_room->take_prop(thing);
                    }
                    else
                    {
                        cout<<endl;
                        cout<<"you can't carry more dude "<<endl;
                    }
                    continue;
                }

                else
                    cout<<endl;
                cout<<"there's no such thing here "<<endl;
                continue;
            }
            if(d2=="Use")
            {
                cout<<"Enter the prop name:";
        getline(cin,thing);
                if(current_room->is_there(thing))
                {
                    current_room->use_prop(thing,carried,number_of_carried);
                }
                else
                {
                    cout<<endl;
                    cout<<"there's no such thing in this room "<<endl;
                    continue;
                }
            }
            if(d2=="Drop")
            {
                cout<<"Enter the prop name:";
                getline(cin,thing);
                if(number_of_carried==0)
                {
                    cout<<endl;
                    cout<<"you can't drop anything..."<<endl;
                }
                else
                {
                    current_room->drop_prop(thing);
                    for(int i=0; i<number_of_carried; i++)
                    {
                        if(carried[i].getname()==thing)
                        {
                            carried[i].setname("");
                            for(int j=i; j<number_of_carried-1; j++)
                            {
                                swap(carried[j],carried[j+1]);
                            }
                            number_of_carried--;
                            cout<<endl;
                            cout<<"you have dropped it "<<endl;
                            break;
                        }
                    }
                }
            }
        }
        else if(d=="No")
        {
            cout<<"Please enter a direction if you want to leave the room : ";
        getline(cin,dir);
            dir[0]=toupper(dir[0]);
            for(int i=1; i<dir.size(); i++)
            {
                dir[i]=tolower(dir[i]);
            }
            if(dir=="Quit")
            {
                return false;
            }
            if((current_room->getlinked(dir))->get_no()+1==4 || (current_room->getlinked(dir))==current_room)
            {

                cout<<"there no room there or the room is full " <<endl << endl;
                system("pause");
                system("cls");
                return true;
            }
            current_room->leave(this);
            current_room=current_room->getlinked(dir);
            current_room->enter(this);
            cout<<endl;
            cout<<"You moved "<<dir<<"....."<<endl;
            system("pause");
            system("cls");
            return true;
        }
    }
}
bool Player::findone_piece(){
for(int i=0;i<8;i++){
    if(carried[i].getname()=="One piece")
        return true;
}
return false;

}
