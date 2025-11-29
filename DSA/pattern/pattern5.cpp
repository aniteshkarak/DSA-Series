// ASCII value adddition
// Ascending alphabet pattern
#include <iostream>
using namespace std;

int main (){
    int row,col;

    for(row=1;row<=5;row++){
        char name  ='a'+row-1;
        for(col=1;col<=4;col++){
            cout <<name << " ";
        }
        cout << endl;
    }

    cout << endl;

    for(row=1;row<=5;row++){
        for(col=1;col<=4;col++){
            char name  ='a'+col-1;
            cout <<name << " ";
        }
        cout << endl;
    }
    
}