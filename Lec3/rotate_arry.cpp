#include<bits/stdc++.h>
using namespace std;

void display(int arr[], int size){
    for(int i = 0 ; i < size ; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int main(){
    int size = 8;
    int arr[] = {1,2,3,4,5,6,7,8};
    int arr2[size];

    int rot;
    cin>>rot;

    display(arr,size);  

    for(int i = 0 ; i < size ; i++){
        arr2[(i+rot+size)%size] = arr[i];
    }

    display(arr2,size);

    return 0;
}