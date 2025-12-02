#include<iostream>
#include<vector>
using namespace std;
int main(){
    int n=5;
    int arr[5]= {1,2,3,4,5};

    int maxsum =INT8_MIN;
    for(int st =0;st<n;st++){
        int cursum = 0;
        for(int end = st;end<n;end++){
            cursum +=arr[end];
            maxsum = max(cursum, maxsum);
        }

    }

    cout << " Max Subarray sum = " << maxsum;
}