#include <iostream>
using namespace std;

bool isValidRegularExpression(string regex) {
    // Regular expression to check if the given input is valid
    if (regex.length() < 2)
        return false;

    char op = regex[regex.length() - 1];
    if (op != 'U' && op != '*' && op != '+')
        return false;

    for (size_t i = 0; i < regex.length() - 1; ++i) {
        char c = regex[i];
        if (!isalnum(c))
            return false;
    }

    return true;
}

bool isStringValidForRegularExpression(string regex, string str) {
    if (!isValidRegularExpression(regex)) {
        cout << "Status: Invalid Expression" << endl;
        return false;
    }

    char op = regex[regex.length() - 1];

     if (op == 'U') {
        if (str[0] == regex[0] || str[2] == regex[2])
            return true;
    } else if (op == '*') {
        if (str.length() == 0)
            return true;
        else if (str[0] == regex[0])
            return isStringValidForRegularExpression(regex, str.substr(1)) || isStringValidForRegularExpression(regex.substr(0, regex.length() - 1), str.substr(1));
        else
            return false;
    } else if (op == '+') {
        if (str.length() == 0)
            return false;
        else if (str[0] == regex[0])
            return isStringValidForRegularExpression(regex.substr(0, regex.length() - 1) + '*', str.substr(1));
        else
            return false;
    }

    return false;
}

int main() {
    string regex;
    cout << "User given regular expression: ";
    getline(cin, regex);

    string str;
    cout << "User Given String: ";
    getline(cin, str);

    bool isValid = isStringValidForRegularExpression(regex, str);
    if (isValid) {
        cout << "Status: valid" << endl;
    } else {
        cout << "Status: invalid" << endl;
    }

    return main();
}
