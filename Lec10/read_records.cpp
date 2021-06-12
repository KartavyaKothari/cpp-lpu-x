#include<bits/stdc++.h>
using namespace std;

int main(){
    ifstream f;
    f.open("records.txt");

    int n;
    f>>n;

    string name;
    int age;

    for(int i = 0 ; i < n ; i++){
        f>>name>>age;
        cout<<name<<" is "<<age<<" years old."<<endl;
    }

    return 0;
}