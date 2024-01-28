#include<bits/stdc++.h>
using namespace std;

class Musician{
        string Name;
        string Instrument;
        int Fans;
        list<string> Songs;
    
    protected:
        int Popularity;

    public:
    // Constructor
    Musician(string name, string instrument){
        Name = name;
        Instrument = instrument;
        Fans = 0;
        Popularity = 0;
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

    void CheckPopularity(){
        if(Popularity > 3){
            cout<<getName()<<" is very popular"<<endl;
        }
        else if(Popularity > 1){
            cout<<getName()<<" is popular"<<endl;
        }
        else{
            cout<<getName()<<" is not popular"<<endl;
        }
    }
};

class IndianMusician: public Musician{
    string Type;
public:
    IndianMusician(string name, string instrument, string type): Musician(name, instrument){
        Type = type;
    }
    
    void Practice(){
        cout<<getName()<<" is practicing, learning new songs, making own Music Compositions........"<<endl;
        Popularity++;
    }
};
class AmericanMusician: public Musician{
    string Type;
public:
    AmericanMusician(string name, string instrument, string type): Musician(name, instrument){
        Type = type;
    }
    
    void Practice(){
        cout<<getName()<<" is practicing, learning new raps, making own Rap songs........"<<endl;
        Popularity++;
    }
};

int main(){
    IndianMusician musician1("Name1", "Instrument1", "Classical");
    musician1.Practice();

    AmericanMusician musician2("Name2", "Instrument2", "Rap");
    musician2.Practice();
    musician2.Practice();
    musician2.Practice();


    // Polymorphism: Same method Practice() is doing different things for different objects
    musician1.Practice();
    musician2.Practice();

    musician1.CheckPopularity();
    musician2.CheckPopularity();


    //Pointers of Base Class can point to the address of object of child class
    Musician *m1 = &musician1;
    Musician *m2 = &musician2;

    // This will give error as pointers of parent class cannnot access the attributes and methods of child class 
    // m1->Practice();
    // m2->Practice();

    m1->CheckPopularity();
    m2->CheckPopularity();
    
    return 0;
}