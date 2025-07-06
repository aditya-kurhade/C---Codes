#include <iostream>
using namespace std;

// Function to add two numbers
int add(int a, int b) {
    return a + b;
}   

int subtract(int a, int b) {
    return a - b;
}

// Function to multiply two numbers
int multiply(int a, int b) {    
    return a * b;
}       
// Function to divide two numbers
double divide(int a, int b) {       
    if (b == 0) {
        cout << "Error: Division by zero!" << endl;
        return 0; // Return 0 or handle error as needed
    }
    return static_cast<double>(a) / b;
}

int main() {
    int num1, num2;
    
    cout << "Enter two integers: ";
    cin >> num1 >> num2;

    cout << "Addition: " << add(num1, num2) << endl;
    cout << "Subtraction: " << subtract(num1, num2) << endl;
    cout << "Multiplication: " << multiply(num1, num2) << endl;
    cout << "Division: " << divide(num1, num2) << endl;

    return 0;
}
