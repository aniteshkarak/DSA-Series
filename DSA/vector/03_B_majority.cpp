#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main (){
    vector<int>nums = {2, 2, 1, 1, 1, 2, 2};
    int n = nums.size();
    int answer;

    // sort 
    sort(nums.begin(), nums.end());

    int freq = 1,ans = nums[0];
    for(int i=1;i<n;i++){
        if(nums[i]==nums[i-1]){
            freq++;
        }
        else{
            freq=1;
            ans = nums[i];
        }
        if(freq>n/2){
            answer = ans;
        }
    }

    cout << answer;
}