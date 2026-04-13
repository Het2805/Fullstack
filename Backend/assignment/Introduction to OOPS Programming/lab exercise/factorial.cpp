#include <iostream>
using namespace std;

void factorial()
{
    int sum = 1;
    int i, n;
    
    cout << "Enter the value: ";
    cin >> n;

    for(i = 1; i <= n; i++){
        sum = sum * i;
    }

    cout << "\nFactorial is " << sum;
}

int main()
{
    factorial();
    return 0;
}
