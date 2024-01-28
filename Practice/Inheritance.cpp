#include<bits/stdc++.h>
using namespace std;

class Musician{
        string Name;
        string Instrument;
        int Fans;
        list<string> Songs;
    
    public:
    // Constructor
    Musician(string name, string instrument){
        Name = name;
        Instrument = instrument;
        Fans = 0;
    }

    //Method
    void getInfo(){
        cout<<"Name: " << Name << endl;
        cout<<"Instrument: " << Instrument << endl;
        cout<<"Fans: " << Fans << endl;
        cout<<"Songs: " << endl;
        for(string song: Songs){
            cout << song << endl;
        }
    }

    // Attributes are made private, and accessed only using public methods
    void PublishSong(string song){
        Songs.push_back(song);
    }

    void MakeFans(){
        Fans++;
    }
    void RemoveFans(){
        if(Fans > 0)
            Fans--;
    }

    // Similarly we can make setter and getter methods for all private attributes
    void setName(string name){
        Name = name;
    }
    string getName(){
        return Name;
    }
};

// Inheritance
class IndianMusician: public Musician{
    string Type;

public:
    IndianMusician(string name, string instrument, string type): Musician(name, instrument){
        Type = type;
    }
    
    // How can we access the public method of parent class from child class?
    // Solution1: make the property you want to access in child class as protected in parent class
    // void Practice(){
    //     cout<<Name<<" is practicing........"<<endl;
    // }
    // Solution2: use a public method of parent class
    void Practice(){
        cout<<getName()<<" is practicing........"<<endl;
    }
};

int main(){
    IndianMusician musician1("Name1", "Instrument1", "Classical");
    musician1.getInfo();

    musician1.PublishSong("Cover1");
    musician1.PublishSong("Cover2");
    musician1.MakeFans();
    musician1.MakeFans();
    musician1.getInfo();

    musician1.Practice();

    return 0;
}