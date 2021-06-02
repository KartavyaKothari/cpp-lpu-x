#include<bits/stdc++.h>
using namespace std;

int max_s(int a, int b){
    cout<<"Max with 2 int values called"<<endl;
    if(a>b){
        return a;
    }else{
        return b;
    }
}

double max_s(double a, double b){
    cout<<"Max with 2 double values called"<<endl;
    if(a>b){
        return a;
    }else{
        return b;
    }
}

int max_s(int a, int b, int c){
    cout<<"Max with 3 int values called"<<endl;
    if(a>b){
        if(a>c){
            return a;
        }else{
            return c;
        }
    }else{
        if(b>c){
            return b;
        }else{
            return c;
        }
    }
}

double max_s(int a, int b, double c){
    cout<<"Max with 3 double values called"<<endl;
    if(a>b){
        if(a>c){
            return a;
        }else{
            return c;
        }
    }else{
        if(b>c){
            return b;
        }else{
            return c;
        }
    }
}


int main(){
    cout<<max_s(10,20)<<endl;
    cout<<max_s(10.5,10.3)<<endl;
    cout<<max_s(10,30,10000.345)<<endl;

    // For function overlaoding two thing shosuld be taken care of
    // Either the number of parameters is differnet
    // Or the data type of parameters is differnt

    return 0;
}