#include<bits/stdc++.h>
using namespace std;

class Rectangle{
public:
    string num;
    int l;
    int b;

    Rectangle(){ // Default constructor - no parameters
        num = "zero";
        l=0;
        b=0;
    }
    Rectangle(string s, int x, int y){ // Parameterized constructor - with parameters
        num = s;
        l=x;
        b=y;
    }
    Rectangle(const Rectangle &r){ // Copy constructor - with object as parameter.
    //Create and initialize a new object by another existing object
        num = r.num;
        l=r.l;
        b=r.b;
    }

    // If we don't pass by reference, 
    // then the copy constructor will be called and an extra object wil be created.
    // And then the destructor will be called for that extra object.(To see this run the below commented code)
    // So, we pass by reference to avoid this.
    void printRectangle(const Rectangle &r){
        cout << "Number: " << r.num << endl;
        cout << "Length: " << r.l << endl;
        cout << "Breadth: " << r.b << endl;
    }

    ~Rectangle(){
            cout << "Destructor called for sides" << num << l << b << endl;
        }
};

int main(){
    Rectangle *ptrRectanlge = new Rectangle("one", 11, 22);
    delete ptrRectanlge;

    Rectangle r1;
    Rectangle r2("one", 10, 20);
    Rectangle r3(r2); 
    Rectangle r4 = r2;

    r1.printRectangle(r1);
    r2.printRectangle(r2);
    r3.printRectangle(r3);
    r4.printRectangle(r4);

    return 0;
}


// #include<bits/stdc++.h>
// using namespace std;

// class Rectangle{
// public:
//     string num;
//     int l;
//     int b;

//     Rectangle(){ // Default constructor - no parameters
//         num = "zero";
//         l=0;
//         b=0;
//     }
//     Rectangle(string s, int x, int y){ // Parameterized constructor - with parameters
//         num = s;
//         l=x;
//         b=y;
//     }
//     Rectangle(const Rectangle &r){ // Copy constructor - with object as parameter.
//     //Create and initialize a new object by another existing object
//         num = r.num;
//         l=r.l;
//         b=r.b;
//     }

//     // If we don't pass by reference, 
//     // then the copy constructor will be called and an extra object wil be created.
//     // This extra object created will be updated with the values of the object passed.
//     // And then the destructor will be called for that extra object.
//     // So, we pass by reference to avoid this.
//     void printRectangle(const Rectangle r){
//         cout << "Number: " << r.num << endl;
//         cout << "Length: " << r.l << endl;
//         cout << "Breadth: " << r.b << endl;
//     }

//     ~Rectangle(){
//             cout << "Destructor called for sides" << num << l << b << endl;
//         }
// };

// int main(){
//     Rectangle r1;
//     Rectangle r2("one", 10, 20);
//     Rectangle r3(r2); 
//     Rectangle r4 = r2;

//     r1.printRectangle(r1);
//     r2.printRectangle(r2);
//     r3.printRectangle(r3);
//     r4.printRectangle(r4);

//     return 0;
// }

