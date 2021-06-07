#include<bits/stdc++.h>
using namespace std;

class Student{
    public:
    string name;
    int roll;

    Student(string n , int roll):
        name(n),
        roll(roll)
    {}

    void introduce(){
        cout<<"Name : "<<name<<endl;
        cout<<"Roll: "<<roll<<endl;
    }
};

int main(){
    Student s("Kartavya",21);
    s.introduce();
    return 0;
}