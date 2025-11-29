// Reverse Integer
#include<iostream>
using namespace std;

int main(){
    int n,a=0,ans=0,digit;
    cout << "Enter a number : ";
    cin >> n;
    int temp = n,last = n;
    while(temp!=0){
        temp/=10;
        a++;
    }
    for(int i=1;i<=a;i++){
        digit = n%10;
        ans = ans*10+digit;
        n /=10;
    }
    cout <<"Reverse of this " << last << " number is = " << ans;
}