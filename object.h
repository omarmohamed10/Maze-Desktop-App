#ifndef OBJECT_H
#define OBJECT_H
#include<bits/stdc++.h>
using namespace std;
class object
{
    public:
        object();
        string getname();
        string getrequirement();
        string getwhat();
        void setname(string n);
        void setrequirement(string n);
        void setwhat(string n);
        virtual bool act()=0;
    protected:
        string name;
        string requirement;
        string what_is_in;
};

#endif // OBJECT_H
