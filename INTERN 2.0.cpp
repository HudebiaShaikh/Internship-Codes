#include <iostream>
using namespace std;

float add(float a, float b);
float subtract(float a, float b);
float multiply(float a, float b);
float divide(float a, float b);

int main() 
{
    float num1, num2;
    char operation;

    cout << "Enter 1st number: ";
    cin >> num1;

    cout << "Enter 2nd number: ";
    cin >> num2;

    cout << "Enter operation (+, -, *, /): ";
    cin >> operation;

    switch (operation) 
	{
        case '+':
            cout << "Result: " << add(num1, num2) << endl;
            break;
        case '-':
            cout << "Result: " << subtract(num1, num2) << endl;
            break;
        case '*':
            cout << "Result: " << multiply(num1, num2) << endl;
            break;
        case '/':
            if (num2 != 0) 
			{
                cout << "Result: " << divide(num1, num2) << endl;
            } else 
			{
                cout << "Error: Cannot divide by zero." << endl;
            }
            break;
        default:
            cout << "Error: Invalid operation." << endl;
    }

    return 0;
}

float add(float a, float b) 
{
    return a + b;
}

float subtract(float a, float b) 
{
    return a - b;
}

float multiply(float a, float b) 
{
    return a * b;
}

float divide(float a, float b) 
{
    return a / b;
}

