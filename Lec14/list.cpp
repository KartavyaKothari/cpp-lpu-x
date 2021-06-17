#include<bits/stdc++.h>
using namespace std;

int main(){
    list<int> lst;

    lst.push_back(10);
    lst.push_back(20);
    lst.push_back(30);

    for(auto itr = lst.begin() ; itr != lst.end() ; itr++){
        cout<<*itr<<" ";
    }

    cout<<endl;

    return 0;
}