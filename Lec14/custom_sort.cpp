#include<bits/stdc++.h>
using namespace std;

void display(vector<int> arr){
    for(int i = 0 ; i < arr.size() ; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

bool cmp_func(int a, int b){
    return a>b;
}

int main(){
    vector<int> arr = {66,4,678,532,578,85,33,5,78,643,345,67,8,54,3,56,432,46,7,7};

   
    display(arr);
    sort(arr.begin(),arr.end(),cmp_func);
    display(arr);
    
    return 0;
}