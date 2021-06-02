#include<bits/stdc++.h>
using namespace std;

int sum(int a = 0, int b = 0, int c = 0, int d = 0){
    return a+b+c+d;
}

int main(){
    cout<<sum()<<endl;
    cout<<sum(10)<<endl;
    cout<<sum(10,20)<<endl;
    cout<<sum(10,20,30)<<endl;
    cout<<sum(10,20,30,40)<<endl;


    return 0;
}