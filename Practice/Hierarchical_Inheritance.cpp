#include<bits/stdc++.h>
using namespace std;

class Parent{
public:
    Parent(){
        cout<<"Parent class"<<endl;
    }
};

class Child1: public Parent{
public:
    Child1(){
        cout<<"Child1 class"<<endl;
    }
};

class Child2: public Parent{
public:
    Child2(){
        cout<<"Child2 class"<<endl;
    }
};

int main(){
    Child1 c1;
    Child2 c2;
    // Parent class
    // Child1 class
    // Parent class
    // Child2 class
    return 0;
}