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
    Student s("Kartavya",23);

    fstream f("student.bat",ios::trunc | ios::out | ios::binary);
    if(!f){cout<<"SOME ERROR";}

    f.write((char *)&s,sizeof(Student));
    f.close();

    if(f.good()){
        cout<<"Write was succesful"<<endl;
    }else{
        cout<<"Write failed"<<endl;
    }

    return 0;
}