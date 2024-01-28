// #include<bits/stdc++.h>
// using namespace std;

// int main(){
//     return 0;
// }

#include<bits/stdc++.h>
using namespace std;

class Musician{
    public:
        string Name;
        string Instrument;
        int Fans;
        list<string> Songs;
    
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
};

int main(){
    // Musician musician1;
    // musician1.Name = "Name1";
    // musician1.Instrument = "Instrument1";
    // musician1.Fans = 1000;
    // musician1.Songs = {"Song1", "Song2", "Song3"};

    // cout<<"Name: " << musician1.Name<<endl;
    // cout<<"Instrument: " <<musician1.Instrument<<endl;
    // cout<<"Fans: " <<musician1.Fans<<endl;
    // cout<<"Songs: " <<musician1.Fans<<endl;
    // for(string song: musician1.Songs){
    //     cout << song << endl;
    // }

    // Musician musician2;
    // musician2.Name = "Name2";
    // musician2.Instrument = "Instrument2";
    // musician2.Fans = 2000;


    // Instead of doing this repetitive task of taking i/p and printing o/p(Follow DRY principle in programming).
    // We can use a constructor, to take input and initialize a object.
    // We can also use a method to print the object.
    Musician musician1("Name1", "Instrument1");
    musician1.Songs = {"Song1", "Song2", "Song3"};

    Musician musician2("Name2", "Instrument2");
    musician2.Songs = {"Song1", "Song2", "Song3"};

    musician1.getInfo();
    musician2.getInfo();
    return 0;
}