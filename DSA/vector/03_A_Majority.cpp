#include<iostream>
#include<vector>
using namespace std;

int main (){
    vector<int>nums = {2, 2, 1, 1, 1, 2, 2};
    int n = nums.size();
    int ans;

    for(int val : nums){
        int freq = 0;
        for(int el : nums){
            if(val==el){
                freq++;
            }
        }
        if(freq>n/2){
            ans = val;
        }
    }
    cout << ans;
}