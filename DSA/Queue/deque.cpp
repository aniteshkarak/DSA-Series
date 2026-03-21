#include <deque>
#include <iostream>
using namespace std;

int main()
{

    // Declare an empty deque of integers
    // deque<int> d1;

    // Declare and initialize a deque with some values
    deque<int> d1 = {10, 20, 30, 40};
    for (int val : d1) {
        cout << val << " ";
    }
    cout << endl;
    return 0;
}