
#include<iostream>
using namespace std;
//public= access modifier
// Constructor is a special type of function that is used to initialize object(to set value of object)
// properties of constructor 1)Constructor is aspecial type of function 2)Constructor has the same name as that of
// the class it belongs 3)It has no return type not even void. 4) It is called automatically 

class Student{
    public:
        string name;
        int age;
        double gpa;


        Student (string x,int y,double z)
        {
          name= x;
          age = y;
          gpa = z;
        }
     
};


int main()
{

   Student student1("Karim", 25, 3.20);

         cout << student1.name << '\n';
         cout << student1.age << '\n';
         cout << student1.gpa << '\n';


return 0;

}