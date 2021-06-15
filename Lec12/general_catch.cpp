#include<bits/stdc++.h>
using namespace std;

int main(){
    try{
        throw 3;
        cout<<"Assdfggfdew"<<endl;
    }catch(int e){
        cout<<"D"<<endl;
    }catch(...){
        cout<<"S"<<endl;
    }

    cout<<"Program executed succesffuly"<<endl;

    return 0;
}