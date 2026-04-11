#include <iostream>
using namespace std;

class Rectangle {
    int length, width;

public:
    void getData() {
        cout << "Enter length: ";
        cin >> length;
        cout << "Enter width: ";
        cin >> width;
    }

    void putdata() {
        int area = length * width;
        cout << "Area of rectangle = " << area;
    }
};

int main() {
    Rectangle r; 
    r.getData();
    r.putdata();
    
    return 0;
}
