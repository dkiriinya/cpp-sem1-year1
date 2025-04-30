#include <iostream>
using namespace std;

int main() {
    int number;

    cout << "Enter a number: ";

    while (!(cin >> number)) {
        cout << "Invalid input! Please enter an integer: ";
        cin.clear();  
        cin.ignore(1000, '\n');  
    }

    if (number > 0) {
        cout << "The number is positive: " << number << endl;
    } else if (number < 0) {
        cout << "The number is negative: " << number << endl;
    } else {
        cout << "The number is zero: " << number << endl;
    }

    cout << "This statement is always executed because it's outside the nested if...else statement." << endl;
    return 0;
}
