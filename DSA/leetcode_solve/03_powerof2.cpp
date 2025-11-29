// POwer of 2
#include<iostream>
using namespace std;

int main(){
    int n,a=0,ans=0,digit;
    cout << "Enter a number : ";
    cin >> n;
    if(n<1)
    cout << "false";
    while(n!=1){
        if(n%2==1)
        cout << "false";

        n/=2;
    }
    cout << "true";
}