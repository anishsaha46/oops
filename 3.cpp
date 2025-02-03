#include <iostream>
using namespace std;

class MathOperations {
public:
    // Overloaded add functions
    int add(int a, int b) {
        return a + b;
    }
    
    double add(double a, double b) {
        return a + b;
    }
};

int main() {
    MathOperations mo;
    cout << "Int addition: " << mo.add(3, 4) << endl;
    cout << "Double addition: " << mo.add(3.5, 4.5) << endl;
    return 0;
}
