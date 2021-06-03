#include<bits/stdc++.h>
using namespace std;

int main(){
    int x = 10;
    cout<<"Value at var x is: "<<x<<endl;
    cout<<"Address of var x is: "<<&x<<endl;

    // int *y = &x;
    int *y;
    y = &x;

    cout<<"Value at var y is: "<<y<<endl;
    cout<<"Value at the address in y is: "<<*y<<endl;
    cout<<"Address of variable y is: "<<&y<<endl;

    *y = 100;
    cout<<x<<endl;

    return 0;
}