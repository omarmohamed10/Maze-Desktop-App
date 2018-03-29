#include "object.h"
#include<bits/stdc++.h>
using namespace std;
object::object()
{
}
string object:: getname(){
return name;}
string object :: getrequirement(){
return requirement;}
string object :: getwhat(){
return what_is_in;}
void object::setname(string n){
name=n;}
void object::setrequirement(string n){
requirement=n;}
void object::setwhat(string n){
what_is_in=n;}
