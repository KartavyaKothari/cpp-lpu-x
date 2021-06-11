// Use the concept of multi-level inheritance. Create a class 
// student with roll number as a member. Create 2 classes:
// Test: containing the marks of a student in 5 subjects 
// inheriting class student ( having roll number of the student).
// Result: containing the function Display() to compute the 
// total and average and then displaying the output as Roll 
// number, total and average which are space separated.

#include<bits/stdc++.h>
using namespace std;

class Student{
    public:
    int roll;
};

class Test : public Student{
    public:
    int math;
    int science;
    int cs;
    int mba;
    int english;
};

class Result : public Test{ 
    public:
    void display(){
        int sum = math+science+cs+mba+english;
        cout<<roll<<" "<<sum<<" "<<(double)sum/5<<endl;
    }
};

int main(){
    Result r;
    r.roll = 21;

    r.math = 89;
    r.science = 92;
    r.cs = 100;
    r.mba = 78;
    r.english = 65;

    r.display();

    return 0;
}