#include<bits/stdc++.h>
using namespace std;

class Rectangle{
public:
    int l;
    int b;

    Rectangle(){ // Default constructor - no parameters
        l=0;
        b=0;
    }
    Rectangle(int x, int y){ // Parameterized constructor - with parameters
        l=x;
        b=y;
    }
    Rectangle(const Rectangle &r){ // Copy constructor - with object as parameter.
    //Create and initialize a new object by another existing object
        l=r.l;
        b=r.b;
    }

    void printRectangle(Rectangle r){
        cout << "Length: " << r.l << endl;
        cout << "Breadth: " << r.b << endl;
    }
};

int main(){
    Rectangle r1;
    Rectangle r2(10, 20);
    Rectangle r3(r1); 
    Rectangle r4 = r1;

    r1.printRectangle(r1);
    r2.printRectangle(r2);
    r3.printRectangle(r3);
    r4.printRectangle(r4);

    return 0;
}