#include<bits/stdc++.h>
using namespace std;

class Base{
    public:
    virtual void show(){
        cout<<"Showing from Base"<<endl;
    }
    void print(){
        cout<<"Printing from base"<<endl;
    }
};

class Child : public Base{
    public:
    void show(){
        cout<<"Showing from Child"<<endl;
    }
    void print(){
        cout<<"Printing from Child"<<endl;
    }
};

int main(){
    // Child *c = new Child;
    Child obj;
    Base *c = &obj;
    
    c->show();
    c->print();

    return 0;
}