#include<bits/stdc++.h>
using namespace std;

class Person{
    public:
    string name;
    int age;

    void func(){
        introduce();
    }

    private:
    void introduce(){
        cout<<"My name is "<<name<<endl;
        cout<<"I am "<<age<<" years old"<<endl;
    }
};

int main(){
    Person p;
    p.name = "Kartavya";
    p.age = 24;

    Person p2;
    p2.name = "Maurice";
    p2.age = 32;

    p.func();
    p2.func();

    return 0;
}