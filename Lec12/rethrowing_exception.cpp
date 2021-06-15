#include<bits/stdc++.h>
using namespace std;

void func(){
    throw 3;
}

void func0(){
    try{
        func();
    }catch(int e){
        cout<<"Small err"<<endl;
        throw;
    }
}

int main(){
    try{
        func0();
    }catch(...){
        cout<<"Err"<<endl;
    }

    return 0;
}