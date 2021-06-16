#include<bits/stdc++.h>
using namespace std;

template <class TYPE>
TYPE sum_arr(TYPE arr[], int size){
    TYPE sum = 0;
    for(int i = 0 ; i < size ; i++){
        sum += arr[i];
    }

    return sum;
}

int main(){
    int arr_i[] = {1,2,3,4,5,6,7,8,9,10};
    double arr_d[] = {1.1,2.2,3.3,4.4,5.5,6.6,7.7,8.8,9.9,10.1};

    cout<<"Sum of arr_i is "<<sum_arr<int>(arr_i,10)<<endl;
    cout<<"Sum of arr_d is "<<sum_arr<double>(arr_d,10)<<endl;

    return 0;
}