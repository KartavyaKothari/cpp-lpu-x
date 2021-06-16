#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int> arr(10,0);
    // vector<int> arr = {1,2,3,4};

    arr.push_back(10);
    arr.push_back(20);
    arr.push_back(30);
    arr.push_back(40);

    for(int i = 0 ; i < arr.size() ; i++){
        cout<<arr[i]<<" ";
    }

    cout<<endl;

    arr.pop_back();
    arr.pop_back();

    for(int i = 0 ; i < arr.size() ; i++){
        cout<<arr[i]<<" ";
    }

    cout<<endl<<"Last ele in array is "<<arr.back()<<endl;

    return 0;
}