#include<bits/stdc++.h>
using namespace std;

class Student{
    public:
    string name;
    int roll;

    Student(){
        cout<<"Cons called"<<endl;
    }

    ~Student(){
        cout<<"Des called"<<endl;
    }
};

void func(){
    int a;
    Student s;
}

int main(){
    cout<<"Calling func"<<endl;
    func();
    cout<<"Out of func"<<endl;
    return 0;
}