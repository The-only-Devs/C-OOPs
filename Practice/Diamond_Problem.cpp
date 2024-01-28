#include<bits/stdc++.h>
using namespace std;

class Parent{
    public:
        Parent(){
            cout<<"Parent"<<endl;
        }
};

class Child1: public Parent{
    public:
        Child1(){
            cout<<"Child1"<<endl;
        }
};

class Child2: public Parent{
    public:
        Child2(){
            cout<<"Child2"<<endl;
        }
};

class GrandChild: public Child1, public Child2{
    public:
        GrandChild(){
            cout<<"GrandChild"<<endl;
        }
};

int main(){
    GrandChild gc;
    return 0;
}