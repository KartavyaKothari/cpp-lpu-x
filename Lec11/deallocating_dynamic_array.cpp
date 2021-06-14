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

int main(){
    A *a = new A;
    delete a;

    cout<<endl;

    A *arr = new A[3];
    // delete arr;
    delete[] arr;

    return 0;
}