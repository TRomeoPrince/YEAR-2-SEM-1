#include <iostream>
#include <string>
#include <cstdlib>

using namespace std;

// Function to handle error messages
void error(string s) {
    cerr << "Error: " << s << "\n";
    exit(1);
}

const int MAX_AGE = 120;

int main() {
    int age = 0;

    cout << "Enter your age: \n";
    cin >> age;

    if (age > MAX_AGE || age < 0) {
        error("Your age is out of bounds");
    }

    cout << "Age accepted: " << age << "\n";
    return 0;
}