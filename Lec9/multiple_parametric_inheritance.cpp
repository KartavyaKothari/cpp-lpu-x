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

class C{
    public:
    C(int a){
        cout<<"Cons of C called"<<endl;
    }
    ~C(){
        cout<<"Des of C called"<<endl;
    }
};

class B : public A, public C{
    public:
    int a;
    B(int a):C(a),A(a){
        cout<<"Cons of B called"<<endl;
    }
    ~B(){
        cout<<"Des of B called"<<endl;
    }
};

int main(){
    B obj(12);

    return 0;
}