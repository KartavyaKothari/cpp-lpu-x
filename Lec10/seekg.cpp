#include<bits/stdc++.h>
using namespace std;

int main(){
    fstream f("text");
    string s;
    // f.seekg(20);
    // f.seekg(20,ios_base::beg);
    f.seekg(-6,ios_base::end);
    
    f>>s;
    cout<<s;


    return 0;
}