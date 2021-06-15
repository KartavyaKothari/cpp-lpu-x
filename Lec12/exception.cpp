#include<bits/stdc++.h>
using namespace std;

int main(){
    int a = 100000;
    // double b = 0;

    // cout<<a/b<<endl;

    try{
        int *arr = new int[a*a];
    }catch(bad_alloc e){
        cout<<"The error is "<<e.what()<<endl;
    }

    cout<<"And program exceuted successfully"<<endl;

    return 0;
}