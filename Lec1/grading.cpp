#include<bits/stdc++.h>
using namespace std;

string to_grade(int marks){
    // switch (marks/10){
    //     case 9:
    //         return "AA";
    //     case 8:
    //         return "AB";
    //     case 7:
    //         return "BB";
    //     case 6:
    //         return "BC";
    //     case 5:
    //         return "CC";
    //     case 4:
    //         return "DD";
    //     default:
    //         return "Fail";
    // }

    if(marks>=91) return "AA";
    if(marks>=81) return "AB";
    if(marks>=71) return "BB";
    if(marks>=61) return "BC";
    if(marks>=51) return "CC";
    if(marks>=41) return "DD";

    return "Fail";
}

int main(){
    int marks;
    cin>>marks;

    cout<<"Your grade result is: "<<to_grade(marks);

    return 0;
}