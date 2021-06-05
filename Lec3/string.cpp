#include<bits/stdc++.h>
using namespace std;

int main(){
    // char arr[10] = "Kartavya";
    // arr[8] = '\0';
    // string arr = "Kartavya";
    string arr;
    // cin>>arr;
    getline(cin,arr);

    arr.push_back('K');
    arr.push_back('o');

    arr = arr+"thari";

    arr.pop_back();
    arr.pop_back();
    arr.pop_back();

    // printf("%s",arr);
    cout<<arr<<endl;
    // cout<<arr2<<endl;

    for(int i = 0 ; i < arr.size() ; i++){
        cout<<arr[i]<<endl;
    }

    return 0;
}