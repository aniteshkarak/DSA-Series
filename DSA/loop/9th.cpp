// Fibonacci  
#include <iostream>

using namespace std;

int main() {
    int n , t1 = 0, t2 = 1, nextTerm,sum=1;

    cout << "Enter the number of terms: ";
    cin >> n;

    cout << "Fibonacci Series: ";

    if (n <= 0) {
        cout << "Please enter a positive integer." << endl;
        return 0; 
    } else if (n == 1) {
        cout << t1 << endl;
        return 0; 
    } else {
        cout << t1 << ", " << t2 << ", ";
        for (int i = 3; i <= n; ++i) {
            nextTerm = t1 + t2;       
            cout << nextTerm << ", "; 
            t1 = t2;                  
            t2 = nextTerm;
            sum = sum +nextTerm ;           
        }
    }

    cout << endl <<"Sum of Fibonacci Series:  " << sum; 

    return 0;
}
