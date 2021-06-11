#include<bits/stdc++.h>
using namespace std;

class A{
    public:
    A(int a){
        cout<<"Cons of A called"<<endl;
    }
    ~A(){
        cout<<"Des of A called"<<endl;
    }
};

class B : public A{
    public:
    int a;
    B():A(12){
        cout<<"Cons of B called"<<endl;
    }
    ~B(){
        cout<<"Des of B called"<<endl;
    }
};

int main(){
    B obj;

    return 0;
}