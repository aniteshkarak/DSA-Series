#include<iostream>
using namespace std;
int main (){
    // continue
    
    for(int i=1;i<=40;i++){
        if(i%4==0)
        continue;
        cout<<i<<" ";
    }

cout << endl << endl;

    // break;

    int i=1;
    while(i<=10){
        if(i==4)
        break;
        cout << i << " ";
        i++;
    }
}