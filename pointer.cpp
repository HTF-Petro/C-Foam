
#include<iostream>
#include "pointer.h"
using namespace std;

int main(){

        int age = 21;
        string freePizzas[5] = {"pizza1","pizza2","pizza3","pizza4","pizza5"};

        int *pAge = & age;
        string *pFreePizzas = freePizzas;  //my array is already an address,so no need to write &(adress of operator)
 
        cout<< *pAge<< '\n';
        cout << *pFreePizzas << '\n';

        return 0;
}


// & = adress of operator(ampersand)
// * = dereference operator(asterisk)

//In C++, a pointer is a variable that stores the memory address of another variable. Instead of holding a direct value, a pointer "points" to the location in memory where the actual data is stored. 
//Sometimes it's easier to work with an address.
//Here's a breakdown of key aspects:
// Declaration:
//Pointers are declared with an asterisk (*) before the variable name, indicating that it's a pointer to a specific data type. For example, int* ptr; declares ptr as a pointer to an integer.
//Address-of Operator (&):
//The address-of operator is used to retrieve the memory address of a variable. For example, ptr = &x; assigns the memory address of variable x to the pointer ptr. 

// Dereference Operator (*):
// The dereference operator is used to access the value stored at the memory address pointed to by a pointer. For example, *ptr would give you the value of x if ptr points to x.
// Pointer Types:
// Pointers are type-specific. An int* pointer can only store the address of an int variable, a float* pointer can only store the address of a float variable, and so on.
// Null Pointers:
//A pointer can be initialized to nullptr to indicate that it doesn't point to any valid memory location. This is important for preventing dereferencing invalid addresses.
// Uses of Pointers:
// Dynamic Memory Allocation: Pointers are crucial for allocating memory on the heap using new and deallocating it with delete.
// Passing Arguments to Functions: Pointers can be used to pass large data structures to functions efficiently, avoiding copying the entire structure.
// Working with Arrays: Array names can be treated as pointers to their first element, enabling pointer arithmetic for traversing arrays.
// Implementing Data Structures: Pointers are fundamental for building complex data structures like linked lists, trees, and graphs. 
//Pointer Arithmetic:
// Pointers can be incremented or decremented to move through memory, especially when working with arrays. The increment/decrement is scaled by the size of the data type the pointer points to.
//  Smart Pointers:
// C++ offers smart pointers (like std::unique_ptr, std::shared_ptr, std::weak_ptr) to help manage memory automatically and prevent memory leaks, making pointer usage safer and easier. 

