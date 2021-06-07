#include<bits/stdc++.h>
using namespace std;

class Student{
    public:
    string name;
    string school;
    int roll;
    int age;

    Student(){
        cout<<"This is a default constructor"<<endl;
    }

    // Special function called constructor
    // Parametrized constructor
    Student(string n, string s, int a, int r){
        name = n;
        school = s;
        age = a;
        roll = r;
    }

    Student(string n, int a, int r){
        name = n;
        school = "KoalaTutorials";
        age = a;
        roll = r;
    }

    void introduce(){
        cout<<"Name : "<<name<<endl;
        cout<<"School: "<<school<<endl;
        cout<<"Roll: "<<roll<<endl;
    }
};

int main(){
    Student s("Kartavya","Cipherschools",23,21);
    s.introduce();
    Student s2;
    Student s3("Simran",28,11);
    s3.introduce();

    // Student s2;

    // s.name = "Kartavya";
    // s.school = "Cipherschools";
    // s.age = 23;
    // s.roll = 21;

    // s.introduce();
    return 0;
}