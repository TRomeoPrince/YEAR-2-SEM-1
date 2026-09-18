// Write a C++ program that accepts three test marks from a user.
// The program should first determine whether all the marks entered are valid, where a valid mark lies between 0 and 100 inclusive. 
// If any mark is invalid, the program should display "Invalid marks". 
// Otherwise, calculate and display the average mark, then assign a grade as follows: 
// A for an average of 80–100, B for 70–79, C for 60–69, D for 50–59, and F for an average below 50.

#include <iostream>
using namespace std;
int main(){
    int a; int b; int c; // Where a is marks score 1, b for marks 2 and so on
    int marks[3] = {a, b, c};
    cout << "Enter the marks\n";
    cin >> a; >> b; >> c;
    // what if I create an array, how do I do it??? I would use it for the validation if or more even a function
    double average = (a + b + c)/3.0
    cout << "Your average is:" << average;
    for (int i= 0; i<3; i++){
        if (marks[i] < 0 || marks[i] >100){
        count << "Invalid Age!";
    }
    }
    
    if(average >=80 && average <=100){
        cout << "Grade: A";      
    }
    else if(average >= 70 && average <== 79){
        cout << "Grade: B";
    }
    else if(average >= 60 && average <= 69){
        cout << "Grade: C";
    }
    else if (average >= 50 && average <= 59){ 
        cout << "Grade: D";
}
else {
    cout << "F";
}
    



    return 0;
}