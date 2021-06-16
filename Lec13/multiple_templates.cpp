#include<bits/stdc++.h>
using namespace std;

template <class TYPE1, class TYPE2>
TYPE2 add(TYPE1 a, TYPE2 b){
    return a+b;
}

// void display(double a){
//     cout<<a<<endl;
// }

int main(){
    cout<<add<int,int>(10,20)<<endl;
    cout<<add<int,double>(10,10.5)<<endl;
    cout<<add<double,double>(10.5,20.5)<<endl;

    cout<<add<string,string>("kartavya"," kothari")<<endl;    

    return 0;
}