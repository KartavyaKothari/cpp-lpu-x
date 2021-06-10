#include<bits/stdc++.h>
using namespace std;

class A{
    private:
    int a;
    protected:
    int b;
    public:
    int c;
};

class B: public A{
    // private:
    // int b;
    // private:
    // int c;

    public:
    B(){
        cout<<" "<<b<<" "<<c<<endl;
    }
};

// class C: public B{
//     public:
//     C(){
//         cout<<a<<" "<<b<<" "<<c;
//     }
// };

int main(){
    B obj;
    cout<<obj.c<<endl;

    return 0;
}