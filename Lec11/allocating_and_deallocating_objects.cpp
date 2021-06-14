#include<bits/stdc++.h>
using namespace std;

class A{
    public:
    A(){
        cout<<"CONS of A called"<<endl;
    }
    ~A(){
        cout<<"DES of A called"<<endl;
    }
};

void func(){
    cout<<"Func begins"<<endl;
    A *a = new A();
    delete a;
    cout<<"Func ends"<<endl;
}

int main(){
    cout<<"Program begins"<<endl;

    func();

    cout<<"Program ends"<<endl;
    return 0;
}