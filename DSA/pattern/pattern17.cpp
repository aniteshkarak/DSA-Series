#include <iostream>
using namespace std;

int main (){
    int n,row,col;
    cout << "Enter a number :";
    cin >>n;

    for(row=1;row<=n;row++){
        for(col=n-1;col>=row;col--){
            cout << " ";
        }
        for(col=1;col<=row;col++){
            cout  << " *";
        }
        cout << endl;
    }

    for(row=n;row>=1;row--){
        for(col=n-1;col>=row;col--){
            cout << " ";
        }
        for(col=1;col<=row;col++){
            cout  << " *";
        }
        cout << endl;
    }
}
    
