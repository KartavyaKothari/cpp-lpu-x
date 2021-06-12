#include<bits/stdc++.h>
using namespace std;

int main(){
    fstream file;
    // file.open("koala.hello",ios::in);
    // file.open("koala.hello",ios::out);
    file.open("koala.hello",ios::in | ios::out);

    if(!file){
        cout<<"File not opened correctly"<<endl;
    }else{
        cout<<"File opened correctly"<<endl;
    }

    int age = 23;
    string name = "Kartavya";

    file<<name<<" "<<age<<endl;

    file>>name>>age;

    cout<<name<<" "<<age<<endl;

    return 0;
}