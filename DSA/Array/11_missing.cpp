#include<iostream>
using namespace std;
int main (){
    int N;
    cout << "enter number of element ";
    cin >>N;
    cout << "Enter Array : "; 
    int arr[N];
    for(int i =0;i<N;i++){
        cin >> arr[i]; 
    }
    int xor1 =0,xor2=0;
    int n = N-1;
    for(int i = 0;i<n;i++){
        xor2 = xor2 ^ arr[i];
        xor1 = xor1 ^ (i+1);
    }
    xor1 = xor1 ^ N;
    int miss = xor1 ^ xor2;
    cout << miss ;
}