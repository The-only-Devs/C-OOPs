
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

int main(){
    Musician musician1("Name1", "Instrument1");
    musician1.PublishSong("Song1");
    musician1.PublishSong("Song2");
    musician1.PublishSong("Song3");
    musician1.MakeFans();
    musician1.MakeFans();
    musician1.MakeFans();
    musician1.RemoveFans();
    musician1.getInfo();

    musician1.setName("NewName");
    cout<<musician1.getName();
    
    return 0;
}