#include<iostream>
using namespace std;

int main(){
    int matrix[3][3] = {{1, 2, 3,},{4, 5, 6},{7 ,8, 9}} ;
    int row = 3,col =3;
    int search = 8;
    bool found = true;

    for(int i =0;i<row; i++){
        for(int j=0;j<col;j++){
            if(search == matrix[i][j]){
                cout << " found at position (" << i << ", " << j << ")" << endl;;
                found = true;
            }
        }
    }
    if (!found) {
        cout << "Element not found in the matrix." << endl;
    }
}

