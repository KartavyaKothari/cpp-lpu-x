#include<bits/stdc++.h>
using namespace std;

void display(vector<int> arr){
    for(int i = 0 ; i < arr.size() ; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

void display(list<int> arr){
    for(int ele : arr){
        cout<<ele<<" ";
    }
    cout<<endl;
}

int main(){
    vector<int> arr = {66,4,678,532,578,85,33,5,78,643,345,67,8,54,3,56,432,46,7,7};

    // arr[5];
    // arr.at(5);

    display(arr);

    // sort
    sort(arr.begin(),arr.end(),greater<int>());
    // arr.sort();

    display(arr);
    
    return 0;
}