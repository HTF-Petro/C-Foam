#include <iostream>
#include <memory> // Header for smart pointers
using namespace std;

class Rectangle {
    int length;
    int breadth;

public:
    Rectangle(int l, int b) : length(l), breadth(b) {} // Use initializer list

    int area() { return length * breadth; }
};

int main() {
    // Create shared_ptr Smart Pointer using std::make_shared
    shared_ptr<Rectangle> P1 = make_shared<Rectangle>(10, 5);

    // Created a weak_ptr smart pointer
    weak_ptr<Rectangle> P2 (P1);
    cout << P1->area() << endl; // Output 50

    // Returns the number of shared_ptr
    // objects that manage the object
    cout << P2.use_count() << endl; // Output 1
    
    return 0;
}
