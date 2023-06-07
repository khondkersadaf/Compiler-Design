#include <iostream>
#include <string>
using namespace std;

bool isFloat(const string& input) {
    for (size_t i = 0; i < input.length(); i++) {
        if (input[i] == '.') {
            return true;
        }
    }
    return false;
}

int main() {
    string input;
    cout << "Enter a number: ";
    cin >> input;

    if (isFloat(input)) {
        cout << "The input is a float." << endl;
    } else {
        cout << "The input is an integer." << endl;
    }

    cout<<""<<endl;
    return (main());
}
