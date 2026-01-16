//weak_ptr is a smart pointer that holds a non-owning reference to an object. It's much more similar to shared_ptr except it will not maintain a 
//reference counter. In this case, a pointer will not have a stronghold on the object. The reason is to avoid the circular dependency created by 
//two or more object pointing to each other using shared_ptr.

#include <iostream>
#include <memory>
using namespace std;
​
class Rectangle {
    int length;
    int breadth;
​
public:
    Rectangle(int l, int b) {
        length = l;
        breadth = b;
    }
​
    int area() { return length * breadth; }
};
​
int main() {
    
    // Create shared_ptr Smart Pointer
    shared_ptr<Rectangle> P1(new Rectangle(10, 5));
    
    // Created a weak_ptr smart pointer
    weak_ptr<Rectangle> P2 (P1);
    cout << P1->area() << endl;
    
    // Returns the number of shared_ptr 
    // objects that manage the object
    cout << P2.use_count();
    return 0;
}