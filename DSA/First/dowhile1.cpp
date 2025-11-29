// Sum of N natural number
#include<iostream>
using namespace std;
int main (){
    int sum=0,i=1,n;
    cout <<"Enter a num : ";
    cin >>n;
    do{
        sum = sum + i;
        i++;
    }while(i<=n);
    cout << sum << " ";
}