#include<bits/stdc++.h>
using namespace std;

int main(){
    short x =  10;
    short *y = &x;

    cout<<y<<endl;
    y = y+1;
    cout<<y<<endl;
    y = y+1;
    cout<<y<<endl;

    return 0;
}

// datatype* ptr;
// ptr+n == ptr + sizeof(datatype)*n;

// datatype* ptr;
// ptr-n == ptr - sizeof(datatype)*n;

// 0x61feb8

// 0x61febc
// 0x61fec0