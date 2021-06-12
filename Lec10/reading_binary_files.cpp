#include<bits/stdc++.h>
using namespace std;

class Student{
    public:
    string name;
    int age;
    Student(){}
    Student(string name, int age){
        this->name = name;
        this->age = age;
    }
    void display(){
        cout<<name<<" is "<<age<<" years old."<<endl;
    }
};

int main(){
    Student s;

    fstream f("student.bat",ios::in | ios::binary);
    if(!f){cout<<"SOME ERROR";}

    f.read((char *)&s,sizeof(Student));
    f.close();

    if(f.good()){
        cout<<"Read was succesful"<<endl;
        cout<<s.name;
    }else{
        cout<<"Read failed"<<endl;
    }

    return 0;
}