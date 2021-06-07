#include<bits/stdc++.h>
using namespace std;

class A{
    public:
    A(){
        cout<<"D"<<endl;
    }
    A(A &a){
        cout<<"C"<<endl;
    }
};

int main(){
    A a;
    A b = a;
    A c(a);
    return 0;
}