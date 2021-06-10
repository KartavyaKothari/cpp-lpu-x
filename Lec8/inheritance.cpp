#include<bits/stdc++.h>
using namespace std;

class Animal{
    public:
    int age;

    void breathe(){
        cout<<"Taking in O2 giving out CO2"<<endl;
    }
};

class Dog : public Animal{

};

int main(){
    Dog d;
    d.age = 12;

    cout<<d.age<<endl;
    d.breathe();

    return 0;
}