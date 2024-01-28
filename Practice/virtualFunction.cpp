#include<bits/stdc++.h>
using namespace std;

class Instrument{
public:
    virtual void makeSound(){
        cout << "Instrument playing....." << endl;
    }
};

class Guitar: public Instrument{
public:
    void makeSound(){
        cout << "Guitar playing....." << endl;
    }
};
class electricGuitar: public Instrument{
public:
    void makeSound(){
        cout << "Electric Guitar playing....." << endl;
    }
};

class Flute: public Instrument{
public:
    void makeSound(){
        cout << "Flute playing....." << endl;
    }
};
class highNoteFlute: public Instrument{
public:
    void makeSound(){
        cout << "High Note Flute playing....." << endl;
    }
};

int main(){
    Instrument *i = new Instrument();
    Instrument *iG = new Guitar();
    Instrument *iF = new Flute();
    Instrument *ieG = new electricGuitar();
    Instrument *ihnF = new highNoteFlute();
    i->makeSound();
    iG->makeSound();
    iF->makeSound();
    ieG->makeSound();
    ihnF->makeSound();

    // Function overriding  - Run time polymorphism
    Instrument *instruments[5] = {i, iG, iF, ieG, ihnF};
    for(int i = 0; i < 5; i++){
        instruments[i]->makeSound();
    }
    return 0;
}