#include <iostream>
using namespace std;

int main (){
    int n,row,col;
    cout << "Enter a number :";
    cin >>n;

    for(row=1;row<=n;row++){
        // char name ='A'+row-1; 
        for(col=1;col<=n-row;col++){
            cout << "  ";
        }

        for(col=1;col<=row;col++){
            char name ='A'+row+col-2; 
            cout <<name << " ";
        }
        cout << endl;
    }
    
}