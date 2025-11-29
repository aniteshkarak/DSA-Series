// power of number
#include<iostream>
using namespace std;

int main (){
    int n,num,pow,i;
    cout << "Enter the number : ";
    cin >> num;
    cout << "Enter the Power : ";
    cin >> pow;
    n=num;
    for(i = num;i<=pow;i++){
        n=n*num;
    }
    cout <<"Power : " <<n;
}