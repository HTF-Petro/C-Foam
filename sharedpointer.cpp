//In unique pointer-can not copy,can not pass it into afunction,have not another class store it
//Shared pointer:more hardcore,works via reference counting(how many references you have to your pointer),shared pointer allocate another block of memory
//called control block,where it stores reference coount.

#include<iostream>
#include<string>
#include<memory>
using namespace std;

class Entity                                  //when we create the Entity we just destroy the entity just to look at the behaviour of smart pointers
{
public:
   Entity()                                   //Constructor
       {
        cout << "Created Entity" << endl;
       }

  ~Entity()                                   //Destructor
       {
        cout << "Destoyed Entity" << endl;
       }

    void Print(){}

};

int main()
{
    {  
          std::shared_ptr<Entity>e0;
          {
             std::shared_ptr<Entity>sharedEntity = std::make_shared<Entity>();  //Entity here is template argument/parameter and entity is name of the unique pointer
            e0 = sharedEntity; <=2ms elapsed

          }
        
    }   


     std::cin.get();
}
