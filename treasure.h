#ifndef TREASURE_H
#define TREASURE_H
#include<bits/stdc++.h>
#include "object.h"
using namespace std;

class treasure:public object
{
    public:
        treasure();
        treasure(string n,string requirement,string what);
        bool act();
};

#endif // TREASURE_H
