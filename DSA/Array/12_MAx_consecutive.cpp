#include<iostream>
#include<vector>
using namespace std;
int main() {
    int max1 =0;
    int cnt = 0;
    vector<int>nums= {1,1,0,1,1,1};
    for(int i=0;i<nums.size();i++){
        if(nums[i]==1){
            cnt++;
            max1=max(max1,cnt);
        }
        else{
             cnt=0;
        }
    }
    cout << max1;
}
