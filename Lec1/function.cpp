// #include<iostream>
#include<bits/stdc++.h>
using namespace std;

int addition(int a, int b){
    return a+b;
}

int subtraction(int a, int b){
    return a-b;
}

int main(){
    int a,b;
    bool is_continue = true;
    
    while(is_continue){
        cout<<"Enter two nums: ";
        cin>>a>>b;

        cout<<"Enter the option \n";
        cout<<"1. Add the nums \n";
        cout<<"2. Sub the nums \n";
        cout<<"3. Find a^b \n";
        cout<<"4. Exit\n";
        cout<<"Reponse: ";

        int res;
        cin>>res;

        switch(res){
            case 1:
                cout<<"The sum of entered numbers is: "<<addition(a,b)<<"\n";
                break;
            case 2:
                cout<<"The subtraction of entered numbers is: "<<subtraction(a,b)<<"\n";
                break;
            case 3:
                cout<<"A^b = "<<pow(a,b)<<"\n";
            case 4:
                is_continue = false;
                break;
        }

        // if(res==1){
        //     cout<<"The sum of entered numbers is: "<<addition(a,b)<<"\n";
        // }else if(res==2){
        //     cout<<"The subtraction of entered numbers is: "<<subtraction(a,b)<<"\n";
        // }else if(res==3){
        //     break;
        // }
    }

    cout<<"Thanks for using my calculator\n";

    return 0;
}