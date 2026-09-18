//Errors
// this program only allows ages up to a certain maximum age

int age;

int main (){
    cout << "Enter your age: \n";
    cin >> age;

    if (age> MAX_AGE){
        error(s: "Your age is out of bounds")
    }


}