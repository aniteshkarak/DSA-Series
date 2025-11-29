#include<iostream>
#include<set>
#include<vector>
using namespace std;
int main (){
    int a[]={1, 3, 5, 9};
    int b[]={2,4,6,7,8};
    int n1=sizeof(a) / sizeof(a[0]);
    int n2=sizeof(b)/sizeof(b[0]);
    set<int>st;
    for(int i=0;i<n1;i++){
        st.insert(a[i]);
    }
    for(int i=0;i<n2;i++){
        st.insert(b[i]);
    }
    vector<int>c;
    for(auto it : st){
        c.push_back(it);
    }
    for(auto x : st){
        cout << x << " ";
    } 

}