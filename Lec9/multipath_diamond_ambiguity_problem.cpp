#include<bits/stdc++.h>
using namespace std;

class A{
    public:
    int a;
};

class B : virtual public A{};
class C : virtual public A{};
class E : public virtual A{};

class D: public B, public C, public E{};

int main(){
    D obj;
    obj.a = 10;
    obj.B::a = 20;
    obj.C::a = 30;

    cout<<obj.B::a<<" "<<obj.C::a<<endl;

    return 0;
}