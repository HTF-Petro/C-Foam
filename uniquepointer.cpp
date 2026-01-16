// Smart pointers in C++ are objects that manage the lifetime of dynamically allocated memory,automatically releaseing memory when no longer needed. 
//"new" allocates memory on the heap and "delete" is needed to delete that memory bcz it won't be freed automatically,smart pointers are a way to automate 
//that process.You don't need to call delete even new.1. Unique pointer-you can't copy a unique pointer2.Shared pointer-3.Weak pointer-
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
    std::unique_ptr<Entity>entity= std::make_unique<Entity>();          //Entity here is template argument/parameter and entity is name of the unique pointer

    entity->Print();

}

     std::cin.get();
}
