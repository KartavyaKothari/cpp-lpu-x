#include<bits/stdc++.h>
// #include<vector>
// #include<list>
using namespace std;

int main(){
    vector<int> arr = {33,653,67,4,123,78,44,6,7889,533,57};
    
    vector<int>::iterator itr;

    for(itr = arr.begin() ; itr != arr.end() ; itr++ ){
        cout<<*itr<<" ";
    }

    cout<<endl;

    vector<int>::reverse_iterator r_itr;

    for(r_itr = arr.rbegin() ; r_itr != arr.rend() ; r_itr++ ){
        cout<<*r_itr<<" ";
    }

    // for(int i = 0 ; i < arr.size() ; i++){
    //     cout<<arr[i]<<" ";
    // }

    return 0;
}