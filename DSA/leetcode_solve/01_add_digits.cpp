// Add digits (123 = 6)
#include<iostream>
using namespace std;

int main(){
    long int n, digit,sum = 0;
    cout << "Enter a number : ";
    cin >>n;
    int temp = n;
    while(n>0){
        digit = n%10;
        sum +=digit;
        n/=10;
    }
    cout << "Sum of this (" << temp << ") number is = " << sum;
}