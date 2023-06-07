#include <iostream>
using namespace std;

bool isArmstrong(int number) {
    int originalNumber = number;
    int sum = 0;

    for (int temp = number; temp > 0; temp /= 10) {
        int digit = temp % 10;
        sum += digit * digit * digit * digit;
    }

    return (sum == originalNumber);
}

int main() {
    int number;
    cout << "Enter a 4-digit number: ";
    cin >> number;

    if (number < 1000 || number > 9999) {
        cout << "Invalid input! Please enter a 4-digit number." << endl;
    cout<<""<<endl;
    return (main());
    }

    if (isArmstrong(number)) {
        cout << number << " is an Armstrong number." << endl;
    } else {
        cout << number << " is not an Armstrong number." << endl;
    }

    cout<<""<<endl;
    return (main());
}
