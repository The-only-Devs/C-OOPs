#include<bits/stdc++.h>
using namespace std;

class Monstor{
protected:
    string Name;

public:
    Monstor(string name){
        Name = name;
    }

    virtual void Attack() = 0;
};

class Dragon: public Monstor{
    public:
        Dragon(string name): Monstor(name){
            Name = name;
        }

        void Attack(){
            cout<<Name<<" attacked you"<<endl;
        }
};
class Zoombie: public Monstor{
    public:
        Zoombie(string name): Monstor(name){
            Name = name;
        }

        void Attack(){
            cout<<Name<<" attacked you"<<endl;
        }
};
class Vampire: public Monstor{
    public:
        Vampire(string name): Monstor(name){
            Name = name;
        }

        void Attack(){
            cout<<Name<<" attacked you"<<endl;
        }
};

int main(){
    Monstor *m[3];
    m[0] = new Dragon("Dragon"); 
    m[1] = new Zoombie("Zoombie"); 
    m[2] = new Vampire("Vampire"); 

    for(int i=0; i<3; i++){
        m[i]->Attack();
    }

    for(int i=0; i<3; i++){
        delete m[i];
    }
    return 0;
}