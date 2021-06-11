// Create a class shape with attributes as length and breath 
// of float type. Create derived classes  rectangle , circle 
// to calculate area of them. Have display methods in both 
// of these derived classes to display the areas calculated . 

// Note: Assume necessary data wherever required

#include<bits/stdc++.h>
using namespace std;

class Shape{
    public:
    int length;
    int breath;
};

class Rectangle : public Shape{
    public:
    int area(){
        return length*breath;
    }

    void display(){
        cout<<"Area of rectangle is "<<area()<<endl;
    }
};

class Circle : public Shape{
    public:
    double area(){
        return 3.14*(breath/2)*(breath/2);
    }

    void display(){
        cout<<"Area of circle is "<<area()<<endl;
    }
};

int main(){
    Rectangle r;
    r.length = 10;
    r.breath = 20;

    Circle c;
    c.breath = 10;

    r.display();
    c.display();

    return 0;
}