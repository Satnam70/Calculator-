#include <iostream>
using namespace std;

// Function declarations
float add(float a, float b) { 
    return a + b; 
}

float subtract(float a, float b) { 
    return a - b; 
}

float multiply(float a, float b) { 
    return a * b; 
}

float divide(float a, float b) {
    if (b != 0)
        return a / b;
    else {
        cout << "Error! Division by zero not allowed.\n";
        return 0;
    }
}
Main Function Structure
int main() {
    float num1, num2;
    int choice;
    char cont;

    do {
        cout << "=== Simple Calculator ===" << endl;
        cout << "1. Addition\n2. Subtraction\n3. Multiplication\n4. Division\n";
        cout << "Enter your choice (1-4): ";
        cin >> choice;

        cout << "Enter first number: ";
        cin >> num1;
        cout << "Enter second number: ";
        cin >> num2;
Switch Case Logic
        switch (choice) {
            case 1:
                cout << "Result: " << add(num1, num2) << endl;
                break;
            case 2:
                cout << "Result: " << subtract(num1, num2) << endl;
                break;
            case 3:
                cout << "Result: " << multiply(num1, num2) << endl;
                break;
            case 4:
                cout << "Result: " << divide(num1, num2) << endl;
                break;
            default:
                cout << "Invalid choice!" << endl;
        }
Loop Control and Program Termination
        cout << "Do you want to perform another calculation? (y/n): ";
        cin >> cont;
        cout << endl;

    } while (cont == 'y' || cont == 'Y');

    cout << "Thank you for using the calculator!" << endl;
    return 0;
