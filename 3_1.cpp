#include <iostream>
using namespace std;

class Shape {
public:
    virtual void draw() const {
        cout << "Drawing Shape" << endl;
    }
};

class Circle : public Shape {
public:
    void draw() const override { // override the base class method
        cout << "Drawing Circle" << endl;
    }
};

void render(const Shape &s) {
    s.draw(); // Call the appropriate draw method at runtime
}

int main() {
    Shape s;
    Circle c;
    render(s); // Output: Drawing Shape
    render(c); // Output: Drawing Circle
    return 0;
}
