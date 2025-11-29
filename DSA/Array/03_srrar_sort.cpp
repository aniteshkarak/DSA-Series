#include<iostream>
#include <algorithm>
using namespace std;
int main (){
    int n = 7;
    int a[] = {8,2,5,2,4,9,1};
    sort(a,a+n);
    for (int i =0 ;i<n;i++){
        cout << a[i] << " ";
        
    }
}