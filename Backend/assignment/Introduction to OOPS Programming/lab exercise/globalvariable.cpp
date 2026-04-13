#include <iostream>
using namespace std;

int globalVar = 10;

int main() {
    int localVar = 5; 

    cout << "Global = " << globalVar << ", Local = " << localVar << endl;

    return 0;
}
