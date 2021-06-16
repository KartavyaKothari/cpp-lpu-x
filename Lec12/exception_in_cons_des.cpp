#include<bits/stdc++.h>
using namespace std;

class Student{
    public:
    Student(){
        cout<<"Cons called"<<endl;
    }

    ~Student(){
        cout<<"Des called"<<endl;
    }
};

int main(){
    cout<<"Program started"<<endl;

    try{
        cout<<"Inside try"<<endl;
        Student s;
        // throw 0;
    }catch(...){
        cout<<"Inside catch"<<endl;
    }

    cout<<"Program ends successfully"<<endl;

    return 0;
}