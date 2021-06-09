#include<bits/stdc++.h>
using namespace std;

class Metric{
    public:
    int kms;
    int m;
    int cms;

    void display(){
        cout<<kms<<" kms, "<<m<<" m, "<<cms<<" cms."<<endl;
    }
};

class Imperial{
    public:
    int miles;
    int feet;
    int inches;

    Imperial(Metric m){
        miles = m.kms*0.621371;
        feet = m.m*3.28084;
        inches = m.cms*0.393701;
    }

    void display(){
        cout<<miles<<" miles, "<<feet<<" feet, "<<inches<<" inches."<<endl;
    }
};

int main(){
    Metric m;
    m.kms = 8;
    m.m = 848;
    m.cms = 86;

    m.display();

    // M1 using constructor
    Imperial i = m;

    // M2 using copy constructor;
    // Imperial i(m);

    i.display();

    return 0;
}