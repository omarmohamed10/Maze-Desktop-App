#ifndef FIXED_PROPS_H
#define FIXED_PROPS_H
#include "object.h"
#include<bits/stdc++.h>
using namespace std;

class fixed_props : public object
{
    public:

        fixed_props();
        fixed_props(string n,string w,string what);
        friend istream &operator >>(istream &input,fixed_props &x);
        bool act();

};

#endif // FIXED_PROPS_H
