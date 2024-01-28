#include<bits/stdc++.h>
using namespace std;

class Parent{
private:
    int z;  

protected:
    int y;

public:
    int x;
};

class Child1: public Parent{
    // x is public
    // y is protected
    // z is not accessible
};

class Child2: protected Parent{
    // x is protected
    // y is protected
    // z is not accessible
};

class Child3: private Parent{
    // x is private
    // y is private
    // z is not accessible
};

int main(){
    return 0;
}