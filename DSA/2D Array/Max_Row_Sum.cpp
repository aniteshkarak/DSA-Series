#include<iostream>
#include <climits>    // for INT_MIN
#include <algorithm>  // for max
using namespace std;

int main(){
    int matrix[3][3] = {{1, 2, 3,},{4, 5, 6},{7 ,8, 9}} ;
    int row = 3,col =3;
    int search = 8;
    int maxRowsum = INT_MIN;

    for(int i =0;i<row; i++){
        int rowsum = 0;
        for(int j=0;j<col;j++){
            rowsum += matrix[i][j];
        }
        maxRowsum = max(maxRowsum, rowsum);
    }

    cout << maxRowsum ;
    
}

