#include <iostream>
using namespace std;


bool isA(string& input);

bool isA(string& input) {
    if (input.empty()) {
        return true;  // Empty string is valid
    }
    if (input.front() == 'a' && input.back() == 'b') {
        input = input.substr(1, input.length()-2);
        return isA(input);
    }
    return false;
}

int main() {
    string inputString;
    cout << "Enter a string to check if it's a valid grammar string: ";
    cin >> inputString;

    if (isA(inputString)) {
        cout << "The input string is a valid grammar string." << endl;
    } else {
        cout << "The input string is not a valid grammar string." << endl;
    }

    return 0;
}
