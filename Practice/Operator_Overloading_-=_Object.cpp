#include<bits/stdc++.h>
using namespace std;

// I want to perform the following operation on Student using operator overloading:
// cout<<s1;
// cout<<s1<<s2;
// school += s1;
// cout<<school;
class Student{
    string Name;
    string Age;

public:
    Student(){
        Name = "";
        Age = "";
    }

    Student(string name, string age){
        Name = name;
        Age = age;
    }

    bool operator==(const Student &std){
        if(this->Name == std.Name && this->Age == std.Age){
            return true;
        }
        return false;
    }
    
    friend ostream& operator<<(ostream &COUT, Student &std);
};

    ostream& operator<<(ostream &COUT, Student &std){
        COUT << "Name: " << std.Name << endl;
        COUT << "Age: " << std.Age << endl;
        return COUT;
    }

class SchoolOfStudent{
    list<Student> Students;

public:
    void operator+=(Student &std){
        this->Students.push_back(std);
    }
    void operator-=(Student &std){
        this->Students.remove(std); 
// This will not work as internal working of remove() function, is such that
// remove() function removes the element by compariing using the "==" operator. 
// It iterates over the datastructure then as it finds the element it deletes the element.

// So, we have to overload the "==" operator for this to work.
// Inshort, Students class mai bhi ekk operator==() nam ka function banana padega.
// JO ki Student wale self-data type ko compare karega aur hame  bool(equal hai ya not equal) return karega.
    }

    friend ostream& operator<<(ostream &COUT, SchoolOfStudent &school);
};

ostream& operator<<(ostream &COUT, SchoolOfStudent &school){
    for(Student std: school.Students){
        COUT << std << endl;
    }
    return COUT;
}

int main(){
    Student s1("Name1", "Age1"); 
    Student s2("Name2", "Age2"); 

    // cout<<s1; 
    // cout << s1<<s2; // We just have to return ostream object from the overloaded operator function.

    SchoolOfStudent school;
    school += s1;
    school += s2;
    cout << school;
    school -= s1;
    cout << school;
    
    cout<< (s1==s2) << endl;
    return 0;
}