#include<bits/stdc++.h>
using namespace std;

int main(){
    int x = 10;
    int *y = &x;
    int **z = &y;
    int ***a = &z;

    cout<<x<<endl;
    cout<<y<<endl;
    cout<<z<<endl;
    cout<<a<<endl<<endl;

    cout<<*y<<endl;
    cout<<**z<<endl;
    cout<<***a<<endl<<endl;

    return 0;
}