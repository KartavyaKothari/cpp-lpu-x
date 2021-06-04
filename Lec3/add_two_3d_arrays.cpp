#include<bits/stdc++.h>
using namespace std;

int main(){
    int arr1[3][3] = {{1,2,3},{10,2,3},{1,2,3}};
    int arr2[3][3] = {{1,2,3},{10,2,3},{1,2,3}};

    for(int i = 0 ; i < 3; i++){
        for(int j = 0 ; j < 3 ; j++){
            cout<<arr1[i][j]+arr2[i][j]<<" ";
        }
        cout<<endl;
    }

    return 0;
}