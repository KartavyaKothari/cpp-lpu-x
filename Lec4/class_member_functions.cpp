#include<bits/stdc++.h>
using namespace std;

class Dog{
    void bark(){
        cout<<"Woof woof!"<<endl;
    }
    void play(){
        cout<<"Go fetch!!"<<endl;
    }
    void sit(){
        cout<<"Sitting like a good boy"<<endl;
    }
    public:
    void live();
};

void Dog::live(){
    bark();
    play();
    sit();
}

int main(){
    Dog d;
    d.live();

    return 0;
}