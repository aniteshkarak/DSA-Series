#include <iostream>
using namespace std;

int main (){
    int n,row,col;
    cout << "Enter a number :";
    cin >>n;

    for(row=1;row<=n;row++){ 
        for(col=1;col<=n-row+1;col++){
            cout << " *";
        }
        for(col=row-1;col>=1;col--){
            cout << "    ";
        }

        for(col=1;col<=n-row+1;col++){
            cout  << " *";
        }
        
        cout << endl;
    }

    for(row=1;row<=n;row++){
        for(col=1;col<=row;col++){
            cout << " *";
        }
        for(col=n-row;col>=1;col--){
            cout << "    ";
        }

        for(col=1;col<=row;col++){
            cout  << " *";
        }
        cout << endl;
    }
    
}