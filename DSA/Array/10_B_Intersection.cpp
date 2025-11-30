#include<iostream>
#include<set>
#include<vector>
using namespace std;
int main (){
    vector<int>a={1, 2, 2, 3, 3, 4, 5, 6};
    vector<int>b={2, 3, 3, 5, 6, 6, 7};
    int n=a.size();
    int m=b.size();
    int i=0,j=0;
    vector<int>ans;
    while(i<n && j<m){
        if(a[i]<b[j]){
            i++;
        }
        else if(b[j]<a[i]){
            j++;
        }
        else{
            ans.push_back(a[i]);
            i++;
            j++;
        }
    }

    for(int x:ans){
        cout << x << ", ";
    }


}