#include<bits/stdc++.h>
using namespace std;

class Student{};

int main(){
    double a = 100;
    double b = 0;

    try{
        if(b==0){
            throw 400;
        }

        if(a == 100){
            Student s;
            throw s;
        }
        cout<<a/b<<endl;
    }catch(int e){
        // cout<<"Error thrown code : "<<e<<endl;
        if(e==400)
            cout<<"inf"<<endl;
        else if(e==10){
            cout<<"LALA"<<endl;
        }
    }catch(Student s){
        cout<<"Saved this student"<<endl;
    }

    cout<<"Program executed correctly"<<endl;

    return 0;
}