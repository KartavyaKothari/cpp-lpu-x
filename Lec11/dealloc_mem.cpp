#include<bits/stdc++.h>
using namespace std;

class Student{};

int main(){
    // int n;
    int *n = new int;
    *n = 10;
    cout<<*n<<endl;

    delete n;

    Student *ptr = new Student();

    delete ptr;

    Student *s_arr = new Student[10];

    delete[] s_arr;

    return 0;
}