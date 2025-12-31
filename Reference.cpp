// Reference can be thought of like an alias or another name of an existing variable.In C++ you use an ampersand in the variable definition and set
// it equal to the variable you want it to reference.whenever you change the value of reference, the value of original variable also apdated.Reference 
// is not a variable. int i = 0;(original value to be refernced) int &ri = i;(alias to i, the reference)
#include<iostream>
using namespace std;

void add_to_int(int &r)  // integer reference as input
{
r+=5;
}

int main()
{
   int i = 0;                   
   int &ri = i;

   cout << i<< endl;      // pringting before calling the function
   cout << ri<< endl;

                    
   add_to_int(ri);

   cout << i<< endl;      //printing after calling the function
   cout << ri<< endl;      // first reference is updated, then it update original variable



    return 0;
}