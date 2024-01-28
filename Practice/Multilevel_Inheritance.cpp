#include<bits/stdc++.h>
using namespace std;

class Parent{
public:
    Parent(){
        cout<<"Parent class"<<endl;
    }
};

class Child: public Parent{
public:
    Child(){
        cout<<"Child class"<<endl;
    }
};

class GrandChild: public Child{
public:
    GrandChild(){
        cout<<"GrandChild class"<<endl;
    }
};

int main(){
    GrandChild c;
    // Parent class
    // Child class
    // GrandChild class
    return 0;
}