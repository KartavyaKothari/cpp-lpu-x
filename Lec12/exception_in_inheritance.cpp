#include<bits/stdc++.h>
using namespace std;

class Base{};
class Derived : public Base{};

int main(){
    try{
        Derived c;
        throw c;
    }catch(Derived d){
        cout<<"Derived caught"<<endl;
    }catch(Base b){
        cout<<"Base caught"<<endl;
    }

    return 0;
}