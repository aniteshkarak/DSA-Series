// 1 2 3 4 5 
// 6 7 8 9 10

#include <iostream>
using namespace std;

int main (){
    int row,col,sum=0;

    for(row=1;row<=4;row++){
        for(col=1;col<=5;col++){
            sum=sum+1;
            cout <<sum << " ";
        }
        cout << endl;
    }
}