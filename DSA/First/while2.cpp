// Print a table using while loop 
#include<iostream>
using namespace std;
int main (){
    int i=1,n;
    cout <<"Enter a num : ";
    cin >> n;
    while(i<=n){
        if(n%i==0){
            cout <<i<<" ";
        }
        i++;
    }
}