#include<bits/stdc++.h>
using namespace std;

// A class is called abstract class if it contains atleast one pure virtual function.
class Instrument{
public:
    // Syntax for pure virtual function
    virtual void makeSound() = 0;
};  

// If we will not provide the implementation of makeSound() in the derived class, then it will give error in case of pure virtual function. 
//  Because pure virtual function says that the derived class should have its own implwmentation of the pure virtual function.
// But in case of virtual function, it will not give any error. As the function in top of the hierarchy will be executed.
class Piano: public Instrument{
public:
    void makeSound(){
        cout << "Piano playing....." << endl;
    }
};
class Guitar: public Instrument{
public:
    
};

int main(){
    // Instrument *i = new Instrument(); // This will give error, as we cannot create object of abstract class.
    Instrument *iP = new Piano();
    iP->makeSound();

    // This will give error Guitar class donot contain its own implementation of pure virtual function makeSound().
    // Instrument *iG = new Guitar();
    // iG->makeSound();
    return 0;
}