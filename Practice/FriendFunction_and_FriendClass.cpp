#include<bits/stdc++.h>
using namespace std;

class Circle{
int radius;
float perimeter;
float area;

public:
    Circle(int r){
        radius = r;
        perimeter = 2*3.14*r;
        area = 3.14*r*r;
    }

    friend void Display(Circle);
    friend class Homework;
};

void Display(Circle c){
    cout<<"Friend Function"<<endl; // Friend Function
    cout<<"Perimeter: "<<c.perimeter<<endl;
    cout<<"Area: "<<c.area<<endl;
}

class Homework{
public:
    void printResult(Circle c){
        cout<<"Friend Class"<<endl; // Friend Class
        cout<<"Perimeter: "<<c.perimeter<<endl;
        cout<<"Area: "<<c.area<<endl;
    }
};


class A{
    int a=200;

    public:
        friend void friendFunc(A &obj);
};

void friendFunc(A &obj){
    cout<<"Friend Function with object as Reference"<<endl; // Friend Function
    cout<<obj.a<<endl; 
}

int main(){
    Circle c(5);
    Display(c);

    Homework h;
    h.printResult(c);


    A obj;
    friendFunc(obj);
    return 0;
}