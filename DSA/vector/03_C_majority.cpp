#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main (){
    vector<int>nums = {2, 2, 1, 1, 1, 2, 2};
    int n = nums.size();
    
    // sort 
    // sort(nums.begin(), nums.end());

    int freq = 0,ans = 0;
    for(int i=1;i<n;i++){
        if(freq==0){
            ans = nums[i];
        }
        if(ans=nums[i]){
            freq++;
        }
        else{
            freq--;
        }
    }

    cout << ans;
}