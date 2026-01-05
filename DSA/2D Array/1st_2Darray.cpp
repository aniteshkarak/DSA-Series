#include<iostream>
using namespace std;

int main(){
    // int matrix[4][3] = {{1, 2, 3,},{4, 5, 6},{7 ,8, 9},{3, 6, 9}} ;
    int matrix[4][3];
    int row = 4;
    int cols = 3;

    for(int i =0;i<row; i++){
        for(int j=0;j<cols;j++){
            cin >> matrix[i][j];
        }
    }

    for(int i =0;i<row; i++){
        for(int j=0;j<cols;j++){
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}