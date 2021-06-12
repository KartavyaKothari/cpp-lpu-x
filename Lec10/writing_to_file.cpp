#include<bits/stdc++.h>
// #include<fstream>
using namespace std;

int main(){
    ofstream s;
    s.open("maurice.sahib");

    if(!s){
        cout<<"Some error"<<endl;
    }else{
        cout<<"File opened successfully"<<endl;
    }

    string s1,s2;
    cin>>s1>>s2;
    s<<s1<<" "<<s2<<endl;

    return 0;
}