#include<iostream>
using namespace std;

int main(){
    int n,ans=0,rem;
    cout << "Enter a number : ";
    cin >> n;
    int check = n;
    while(n!=0){
        rem = n%10;
        ans = ans*10+rem;
        n/=10;
    }
    if(check==ans)
    cout <<"This is a Palindrome Number" ;
    else
    cout <<"This is not a Palindrome Number";
}