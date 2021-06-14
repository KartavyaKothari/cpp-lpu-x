#include<bits/stdc++.h>
using namespace std;

class Student{};

int main(){
    // int n;
    int *n = new int;
    *n = 10;
    cout<<*n<<endl;

    Student *ptr = new Student();

    int *arr = new int[10];
    Student *s_arr = new Student[10];

    return 0;
}