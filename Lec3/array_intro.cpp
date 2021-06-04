#include<bits/stdc++.h>
using namespace std;

int main(){
    int arr[] = {1,2,3,4,5,6,7,8,9,0};
    int size = 10;

    for(int i = 0 ; i < size ; i++){
        // cout<<arr[i]<<" ";
        cout<<*(arr+i)<<" ";
    }


    return 0;
}


// arr[n] === *(arr+n)
// arr[0] === *(arr+0) === *arr