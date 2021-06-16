#include<bits/stdc++.h>
using namespace std;

template <class TYPE>
class Calculator{
    TYPE x;
    TYPE y;
    public:

    Calculator(TYPE a, TYPE b){
        x = a;
        y = b;
    }

    TYPE add(){
        return x+y;
    }

    TYPE sub(){
        return x-y;
    }

    TYPE mul(){
        return x*y;
    }
};

int main(){
    Calculator<int> c(10,20);
    Calculator<double> c2(10.5,20.3);

    cout<<c.add()<<endl;
    cout<<c.sub()<<endl;
    cout<<c.mul()<<endl;
    
    cout<<endl;

    cout<<c2.add()<<endl;
    cout<<c2.sub()<<endl;
    cout<<c2.mul()<<endl;

    return 0;
}