#include<bits/stdc++.h>
using namespace std;

class Animal{
    public:
    void feeding(){
        cout<<"Eat food"<<endl;
    }
    void speak(){
        cout<<"Make a sound"<<endl;
    }
};

class Dog: public Animal{
    public:
    void speak(){
        // Animal::speak();
        cout<<"Woof woof!!"<<endl;
    }

    void do_trick(){
        cout<<"Sit"<<endl;
    }
};

class Tommy: public Dog{};

int main(){
    Tommy d;
    d.feeding();
    d.Animal::speak();
    d.Dog::speak();
    d.speak();
    d.do_trick();

    return 0;
}