#include<bits/stdc++.h>
using namespace std;

class Student{
    public:
    string name;
    string school;
    int roll;
    int age;

    Student(string n, string s, int a, int r){
        name = n;
        school = s;
        age = a;
        roll = r;
    }

    // Student(Student s){
    //     name = s.name
    // }

    void introduce(){
        cout<<"Name : "<<name<<endl;
        cout<<"School: "<<school<<endl;
        cout<<"Roll: "<<roll<<endl;
        cout<<endl;
    }
};

int main(){
    Student s("Kartavya","Cipherschools",23,21);
    s.introduce();
    
    // Student s2(s);
    Student s2 = s;

    s.school = "KoalaTutorials";

    s2.introduce();
    return 0;
}