#include<bits/stdc++.h>
using namespace std;

// Using constructor
// class Time{
//     public:
//     int hours;
//     int mins;

//     Time(){}

//     Time(int t){
//         hours = t/60;
//         mins = t%60;
//     }

//     void display(){
//         cout<<hours<<":"<<mins<<endl;
//     }
// };

// Using op overload
class Time{
    public:
    int hours;
    int mins;

    Time(){}

    void operator =(int t){
        hours = t/60;
        mins = t%60;
    }

    void display(){
        cout<<hours<<":"<<mins<<endl;
    }
};

int main(){
    int mins_from_midnight = 330;
    
    // For constructor method
    // Time t = mins_from_midnight

    Time t;
    t = mins_from_midnight;

    t.display();

    return 0;
}