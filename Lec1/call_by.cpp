#include<bits/stdc++.h>
using namespace std;

void incre_by_value(int a){
    a++;
}

void incre_by_add(int *a){
    (*a)++;
}

void incre_by_ref(int &a){
    a++;
}

void swap_a(int &a, int &b){
    int temp = a;
    a = b;
    b = temp;
}

int main(){
    int a = 10;
    // incre_by_value(a);
    // cout<<a<<endl;

    incre_by_add(&a);
    cout<<a<<endl;

    // incre_by_ref(a);
    // cout<<a<<endl;
    

    int a = 10, b = 20;

    swap_a(a,b);

    cout<<a<<" "<<b;
    return 0;
}