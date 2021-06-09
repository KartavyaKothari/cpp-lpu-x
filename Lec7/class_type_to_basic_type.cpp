#include<bits/stdc++.h>
using namespace std;

class Age{
    public:
    int years;
    int months;

    operator int(){
        return 12*years + months;
    }
};

int main(){
    Age a;
    a.years = 23;
    a.months = 9;

    int months = (int)a;

    cout<<"Age = "<<months<<endl;

    return 0;
}