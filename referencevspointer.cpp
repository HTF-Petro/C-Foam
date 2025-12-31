//1.Reference can not be null, a reference always be tied to a variable that exists 2.You can not change a variable that is referenced by a reference,
//once the reference is associated to a variable,it is that way foreever.3.You can not do math on references, a reference can not be indexed,added to,
//subtracted from but pointer can.4.You can have pointers to pointers but you can not have references to references.
#include<iostream>
using namespace std;

int main(int argc,char **argv)
{
  int x = 1;

  int *pX = &x;  
  int &rX = x;   
     
  *pX +=1;      // a pointer implementaion of updating a variable;
   rX +=1;      // a reference implementaion of updating a variable;

   cout << x <<endl;

    return 0;
}