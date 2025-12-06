// dynamic memory = memory that is allocated after the program is already compiled and running.Use the "new" operator
// to allocate memory in the heap rather than stack
// useful when we don't know how much memory we will need, Makes our programs more flexible, especially when
// we accepting user input.
#include <iostream>
using namespace std;

int main(){

     int *pNum = NULL;

     pNum = new int;
     
     *pNum = 21;

     cout << "address: " << pNum << '\n';
     cout << "value: " << *pNum << '\n';

     delete pNum;


    return 0;
   }