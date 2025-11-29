// Print a table using while loop 
#include<iostream>
using namespace std;
int main (){
    int i=1,n;
    cout <<"Enter a table no : ";
    cin >> n;
    while(i<=10){
        cout <<n*i<<" ";
        i++;
    }
}