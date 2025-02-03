#include <iostream>
using namespace std;

class Point {
public:
    int x, y;
    
    // Parameterized constructor
    Point(int a, int b) : x(a), y(b) {}

    // Member function to display point
    void display() const {
        cout << "Point(" << x << ", " << y << ")" << endl;
    }
};

int main() {
    Point p(10, 20);
    p.display();
    return 0;
}
