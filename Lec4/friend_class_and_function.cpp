#include<bits/stdc++.h>
using namespace std;

class Person{
    int bank_balance = 1000;
    string adhaar = "DSASHSH";
    public:
    string name;

    friend class Government;
    friend void hacker(Person p);
};

class Government{
    public:
    void hackerman(Person p){
        cout<<"Government business"<<endl;
        cout<<"Name = "<<p.name<<endl;
        cout<<"Adhaar = "<<p.adhaar<<endl;
        cout<<"Account balance = "<<p.bank_balance<<endl;
    }
};

void hacker(Person p){
    cout<<"You've been hacked"<<endl;
    cout<<"Name = "<<p.name<<endl;
    cout<<"Adhaar = "<<p.adhaar<<endl;
    cout<<"Account balance = "<<p.bank_balance<<endl;
}

int main(){
    Person p;
    p.name = "Manish";

    Government g;
    g.hackerman(p);

    cout<<endl;

    hacker(p);


    return 0;
}