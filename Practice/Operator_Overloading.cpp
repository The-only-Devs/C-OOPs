#include<bits/stdc++.h>
using namespace std;

// I want to perform the following operation on complex numbers using operator overloading:
// Complex c3 = c1 + c2;
// Complex c4 = c3;
class Complex{
    int real;
    int imag;

public:
    Complex(){
        real = 0;
        imag = 0;
    }

    Complex(int r, int i){
        real = r;
        imag = i;
    }

    void printComplex(){
        cout << real << " + i" << imag << endl;
    }

    Complex operator+(const Complex &c){
        Complex temp;
        temp.real = real + c.real;
        temp.imag = imag + c.imag;
        return temp;
    }
    Complex operator-(){
        Complex temp;
        temp.real = -real;
        temp.imag = -imag;
        return temp;
    }
};

int main(){
    Complex c1(10, 20);
    Complex c2(5, 5);
    Complex c3 = c1 + c2; // Here c1 is the calling object and c2 is the parameter object.
    // This is same as c1.operator+(c2).
    Complex c4 = c1.operator+(c2);

    Complex c5 = c1 + c2 + c3 ; // This is same as c1.operator+(c2).operator+(c3).operator+(c4).

    c3.printComplex();
    c4.printComplex();
    c5.printComplex();

    Complex c6 = -c1; // Here c1 is the calling object. This is same as c1.operator-().
    Complex c7 = c1.operator-();
    c6.printComplex();
    c7.printComplex();
    return 0;
}