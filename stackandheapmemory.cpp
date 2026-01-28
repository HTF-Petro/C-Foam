// In terms of how application is launched and what the operating system does is loosely it will load the entire program into memory as well as allocate 
// a whole bunch of physical RAM so that our actual aplication can run. Now the stack and the heap are two areas in the RAM, stack is typically a area of 
// memory that has predefined size usually around two mega bytes or so and the heap is an area that is also kind of predefined to default value however
// it can grow and change as our application goes on.The actual/physical location of this two areas of memory ultimately in our RAM.Memory in our program
// is needed so that we can store data whether it is variable or may be we read stuff in from a file and we need to process that data.We can ask C++ to give
// us some memory from either in heap or stack, it will give us a block of memory of our requested size. Difference is how it allocates,stack and heap 
// gives us memory differently.


#include <iostream>
#include <string>

class Vector3 {
public: // Fields must be public to access them, or use a constructor
    float x, y, z;

    Vector3() 
        : x(10), y(11), z(12) {}
};

int main() {
    // --- STACK ALLOCATION ---
    {
        int value = 5;               // Allocated on the stack
        int array[5];                // Fixed size, allocated on the stack
        array[0] = 1;
        array[1] = 2;
        array[2] = 3;
        array[3] = 4;
        array[4] = 5;
        
        Vector3 vector;              // Object allocated on the stack
    } // <--- Everything above is automatically destroyed here (out of scope)

    // --- HEAP ALLOCATION ---
    int* hvalue = new int;           // Allocate one integer on the heap
    *hvalue = 5;

    int* harray = new int[5];        // Allocate array of 5 ints on the heap
    harray[0] = 1;                   // Accessing heap array uses same syntax
    harray[1] = 2;
    harray[2] = 3;
    harray[3] = 4;
    harray[4] = 5;

    Vector3* hvector = new Vector3(); // Object allocated on the heap

    // --- CLEANUP ---
    // Unlike the stack, you MUST manually free heap memory
    delete hvalue;
    delete[] harray;                 // Note the [] for deleting arrays
    delete hvector;

    std::cin.get();
    return 0;
}
//The Address: A pointer is just an integer that represents a location in your RAM.

//Dereferencing (*): When you type *hvalue = 5;, you are telling the CPU: "Look at the address stored in hvalue, go to that physical spot in the heap, 
//and write the number 5 there."

//Size of the Pointer: Interestingly, on a 64-bit system, a pointer (the "address holder") is always 8 bytes, regardless of what it points to. 
//Whether it's pointing to a single char or a massive Vector3 object, the pointer on the stack stays the same size because it's just a "GPS coordinate."



//Vector3* hvector = new Vector3();     means

//vector3: This is the data type (likely a user-defined class or struct) for which memory is being allocated.
//* hvector: This declares a pointer variable named hvector that is capable of storing the memory address of an object of type vector3.
//new vector3(): This is the dynamic memory allocation expression:

// new: This is a C++ operator that requests memory from the free store (heap) [1].
//vector3(): This calls the default constructor for the vector3 class to initialize the newly allocated object [1].

//=: This is the assignment operator, which assigns the memory address returned by the new operator to the pointer hvector. 
