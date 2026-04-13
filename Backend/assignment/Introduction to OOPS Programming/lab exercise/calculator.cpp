#include <iostream>
using namespace std;

int main()
{
    float a, b;
    int choice;

    cout << "Enter A :\n";
    cin >> a;

    cout << "Enter B :\n";
    cin >> b;

    cout << "\nSelect operation:\n";
    cout << "1. Addition\n";
    cout << "2. Subtraction\n";
    cout << "3. Multiplication\n";
    cout << "4. Division\n";
    cout << "Enter your choice:\n";
    cin >> choice;
    switch(choice)
    {
        case 1:
            cout << "\nAdd = " << a + b;
            break;

        case 2:
            cout << "\nSub = " << a - b;
            break;

        case 3:
            cout << "\nMul = " << a * b;
            break;

        case 4:
                cout << "\nDiv= " << a / b;
            break;

        default:
            cout << "\nInvalid choice!";
    }

    return 0;
}
