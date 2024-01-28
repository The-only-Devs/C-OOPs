#include<bits/stdc++.h>
using namespace std;

class Book{
    string Title;
    string Author;
    float *Ratings;
    int RatingsCnt;

public:
    Book(string title, string author){
        Title = title;
        Author = author;

        RatingsCnt = 2;
        Ratings = new float[RatingsCnt];
        Ratings[0] = 4;
        Ratings[1] = 5;
        cout<<Title<<" Constructor called"<<endl;
    }

    Book(const Book &b){
        Title = b.Title;
        Author = b.Author;
        
        RatingsCnt = b.RatingsCnt;
        Ratings = new float[RatingsCnt];
        for(int i=0; i<RatingsCnt; i++){
            Ratings[i] = b.Ratings[i];
        }
        cout<<Title<<" Copy Constructor called"<<endl;

    }
    // ~Book(){
    //     delete Ratings;
    //     cout << Title << "Destructor called" << endl;
    // } // This is not correct way of deleting a pointer to array.
    // There is still a error in this code which will be discussed in the copy constuctor with pointer.
    ~Book(){
        delete [] Ratings;
        Ratings = nullptr;
        cout << Title << "Destructor called" << endl;
    }
};

int main(){
    Book b1("Millionaire Fastlane", "M.J. DeMarco");
    Book b2("C++ Lambda Story", "Bartek Filipek");
    return 0;
}