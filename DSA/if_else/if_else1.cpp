// condition 
#include <iostream>
using namespace std;

int main() {
    int age ;
    cout << "Enter your age :";
    cin >> age;
    
    if (age >= 18) {
        cout << "You are an adult." << endl;
    } else {
        cout << "You are a minor." << endl;
    }
    
    int score;
    cout << "Enter your score :";
    cin >> score;
    
    if (score >= 90) {
        cout << "Grade: A" << endl;
    } else if (score >= 80) {
        cout << "Grade: B" << endl;
    } else if (score >= 70) {
        cout << "Grade: C" << endl;
    } else {
        cout << "Grade: F" << endl;
    }
    
    return 0;
}