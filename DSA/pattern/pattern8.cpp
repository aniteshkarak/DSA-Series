//  number pattern in Diierent away

#include <iostream>
using namespace std;

int main (){
    int row,col;

    for(row=1;row<=4;row++){
        for(col=1;col<=row;col++){
            cout <<col << " ";
        }
        cout << endl;
    }

    cout << endl;

    for(row=1;row<=4;row++){
        for(col=1;col<=row;col++){
            cout <<row << " ";
        }
        cout << endl;
    }

    cout << endl;

    for(row=1;row<=4;row++){
        for(col=row;col>=1;col--){
            cout <<col << " ";
        }
        cout << endl;
    }
    
}