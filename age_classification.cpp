#include <iostream>
using namespace std;

int main()
{
    int age = 0;

    cout << "Please enter your age\n";
    cin >> age;

    if (age < 0) {
        cout << "Invalid Age\n";
    }
    else if (age >= 0 && age < 13) {
        cout << "You are a child\n";
    }
    else if (age >= 13 && age < 18) {
        cout << "You are a teenager\n";
    }
    else if (age >= 18 && age <= 59) {
        cout << "You are an Adult\n";
    }
    else {
        cout << "You are a senior citizen\n";
    }

    return 0;
}