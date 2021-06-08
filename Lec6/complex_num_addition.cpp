#include<bits/stdc++.h>
using namespace std;

class Complex{
    public:
    int r;
    int c;

    Complex(){}

    Complex(int real, int comp){
        r = real;
        c = comp;
    }

    void display(){
        cout<<r<<"+"<<c<<"i"<<endl;
    }

    void operator ++(){
        cout<<"Incrementing real and comp part"<<endl;
        r++;
        c++;
    }

    void operator --(){
        cout<<"Decrementing real and comp part"<<endl;
        r--;
        c--;
    }

    void operator !(){
        cout<<"Fliping real and comp part"<<endl;
        r = -r;
        c = -c;
    }

    Complex operator +(Complex obj){
        Complex num(r+obj.r,c+obj.c);
        return num;
    }
};

int main(){
    Complex c1(2,3);
    Complex c2(6,-2);

    c1.display();
    c2.display();

    // Unary operator overloading
    // ++c1;
    // c1.display();

    // --c1;
    // c1.display();

    // !c2;
    // c2.display();

    Complex c3 = c1+c2;
    c3.display();
    return 0;
}

// c1: 2+3i
// c2: 6+-2i
// c3: 8+1i