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

    operator Metric(){
        Metric m;
        m.kms = miles*1.60934;
        m.m = feet*0.3048;
        m.cms = inches*2.54;

        return m;
    }

    void display(){
        cout<<miles<<" miles, "<<feet<<" feet, "<<inches<<" inches."<<endl;
    }
};

int main(){
    Imperial i;
    i.miles = 5;
    i.feet = 2629;
    i.inches = 5;

    i.display();

    // M3 using type conversipon method
    Metric m;
    m = (Metric) i;

    m.display();

    return 0;
}