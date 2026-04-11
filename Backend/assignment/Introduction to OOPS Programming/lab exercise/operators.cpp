#include <iostream>
using namespace std;

int main() {
    int a = 10, b = 5;
    cout << "\nArithmatic Operator" ;

    cout << "\na + b = " << a + b ;
    cout << "\na - b = " << a - b ;
    cout << "\na * b = " << a * b ;
    cout << "\na / b = " << a / b ;

    cout << "\nRelational Operators:" ;
    cout << "\na > b: " << (a > b) ;
    cout << "\na < b: " << (a < b) ;
    cout << "\na == b: " << (a == b) ;

    cout << "\nLogical Operators:" ;
    cout << "\n(a > 0 && b > 0): " << (a > 0 && b > 0) ;
    cout << "\n(a > 0 || b < 0): " << (a > 0 || b < 0) ;
    cout << "\n!(a > b): " << !(a > b) ;

    cout << "\nBitwise Operators:" ;
    cout << "\na & b = " << (a & b) ;
    cout << "\na | b = " << (a | b) ;

    return 0;
}  
