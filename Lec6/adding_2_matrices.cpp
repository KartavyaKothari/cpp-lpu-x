#include<bits/stdc++.h>
using namespace std;

class Matrix{
    public:
    int arr[3][3];
    Matrix(int m){
        for(int i = 0 ; i < 3 ; i++){
            for(int j = 0 ; j < 3 ; j++){
                arr[i][j] = (i+j)*m;
            }
        }
    }

    void display(){
        for(int i = 0 ; i < 3; i++){
            for(int j = 0 ; j < 3 ; j++){
                cout<<arr[i][j]<<" ";
            }
            cout<<endl;
        }

        cout<<endl;
    }

    Matrix operator +(Matrix m){
        Matrix res(0);
        
        for(int i = 0 ; i < 3 ; i++){
            for(int j = 0 ; j < 3 ; j++){
                res.arr[i][j] = arr[i][j]+m.arr[i][j];
            }
        }

        return res;
    }

    void operator ++(){
        for(int i = 0 ; i < 3 ; i++){
            for(int j = 0 ; j < 3 ; j++){
                ++arr[i][j];
            }
        }
    }
};

int main(){
    Matrix a(1);
    Matrix b(2);

    a.display();
    b.display();

    Matrix c = a+b;
    c.display();

    ++c;
    c.display();


    return 0;
}