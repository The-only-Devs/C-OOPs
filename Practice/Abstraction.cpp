#include<bits/stdc++.h>
using namespace std;

class smartPhone{
public:
    virtual void takeASelfie() = 0;
    virtual void makeACall() = 0;
};

class Android: public smartPhone{
public:
    void takeASelfie(){
        cout << "Android taking a selfie........" << endl;
    }
    void makeACall(){
        cout << "Android making a call........" << endl;
    }
};

class iPhone: public smartPhone{
public:
    void takeASelfie(){
        cout << "iPhone taking a selfie........"<< endl;
    }
    void makeACall(){
        cout << "iPhone making a call........" << endl;
    }
};

int main(){
    smartPhone *sA = new Android();
    smartPhone *siP = new iPhone();

    sA->takeASelfie();
    sA->makeACall();
    siP->takeASelfie();
    siP->makeACall();
    return 0;
}