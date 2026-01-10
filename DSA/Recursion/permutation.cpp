#include <bits/stdc++.h>
using namespace std;

void getPerms(vector<char>& arr, int idx) {
    // Base case
    if (idx == arr.size()) {
        for (char c : arr)
            cout << c << " ";
        cout << endl;
        return;
    }

    // Recursive case
    for (int i = idx; i < arr.size(); i++) {
        swap(arr[idx], arr[i]);        // choose
        getPerms(arr, idx + 1);        // explore
        swap(arr[idx], arr[i]);        // backtrack
    }
}

int main() {
    vector<char> arr = {'a', 'b', 'c'};
    getPerms(arr, 0);
    return 0;
}
