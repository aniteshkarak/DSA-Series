#include<iostream>
using namespace std;

int main (){
    int n = 11;
    int a[]={2,2,2,4,4,5,9,9,9,9,9};
    int i = 0;
    for(int j =1;j<n;j++){
        if(a[i]!=a[j]){
            a[i+1] = a[j];
            i++;
            
        }
    }
    for(int k =0;k<=i;k++){
        cout << a[k] << " ";
    }
} 