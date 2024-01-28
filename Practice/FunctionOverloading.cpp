// #include<bits/stdc++.h>
// using namespace std;

// class Sum{
//     public:
//         int sum(int a, int b){
//             return  a+b;
//         }

//         int sum(int a, int b, int c){
//             return a+b+c;
//         }

//         float sum(float a, float b){
//             return a+b;
//         }
// };

// int main(){
//     Sum s;
//     cout<<s.sum(1, 2)<<endl;
//     cout<<s.sum(1, 2, 3)<<endl;
//     cout<<s.sum(float(5.5), float(5.5))<<endl;
//     return 0;
// }

#include<bits/stdc++.h>
using namespace std;

class Shape{
protected:
    string Name;
public:
    Shape(string name){
        Name = name;
    }

    virtual void Area(){
        cout<< "Please use my Child class"<<endl;
    }
};

class Circle: public Shape{
    public:
        Circle(string name): Shape(name){
            Name = name;
        }

        void Area(int radius){
            cout<<Name<<" area is "<<3.14*radius*radius<<endl;
        }
};
class Square: public Shape{
    public:
        Square(string name): Shape(name){
            Name = name;
        }

        void Area(int side){
            cout<<Name<<" area is "<<side*side<<endl;
        }
};
class Rectangle: public Shape{
    public:
        Rectangle(string name): Shape(name){
            Name = name;
        }

        void Area(int length, int breadth){
            cout<<Name<<" area is "<<length*breadth<<endl;
        }
};

int main(){
    Circle c("Circle");
    Square s("Square");
    Rectangle r("Rectangle");

    c.Area(5);
    s.Area(5);
    r.Area(5, 10);
    return 0;
}