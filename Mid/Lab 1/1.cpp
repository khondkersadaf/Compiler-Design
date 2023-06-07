#include <iostream>
using namespace std;

bool isFibonacci(int number) {
    int a = 0, b = 1;
    while (b < number) {
        int temp = b;
        b = a + b;
        a = temp;
    }
    return b == number;
}

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;

    if (isFibonacci(num)) {
        cout << "The number " << num << " is present in the Fibonacci series." << endl;
    } else {
        cout << "The number " << num << " is not present in the Fibonacci series." << endl;
    }

    return 0;
}

