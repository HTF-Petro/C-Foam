//Dynamic arrays or standard vector(shoud be named arrayList) class. Standard template library is a library filled with containers. (container type is that contains certain data) is called Standard 
//template library(STL), because you can template it into anything. C++ provides us with a vector, that vector is in the std namespace. Unlike std::arrays, std:: vector can resize.Everytime
//you put elements into it, the size grows.When you make a vector it may allocate ten elements, when you exceed that you basically create a new array in memory that bigger than the first 
//that copies everything to there and then delete the older one, now you have a new array in somewhere else in memory that has enough storage.
#include<iostream>
#include<string>
#include<vector>
using namespace std;

struct Vertex
  {
   float x,y,z;
  };

  std::ostream& operator<<(std:: ostream& stream, const Vertex& vertex)  // output operator to print aesily in the output
  {
     stream << vertex.x << "," << vertex.y << "," << vertex.z;
     return stream;
  }

  void Function(const std::vector<Vertex>& vertices)   // passing vector into function or class
  {

  }
  int main()
    {

    std::vector<Vertex>vertices;                  //here we are not storing pointers but object bcz pointers point object or address of memory which is same on size.
    vertices.push_back({1,2,3});                  //  we used initializer list instead of constructor
    vertices.push_back({4,5,6});

     for (int i=0;i< vertices.size(); i++)       // Let's iterate through all this to ask size and print them(range based for loop)
         
        cout << vertices[i] << endl;              // size() is the function to retrieve the size       

     for (Vertex& v: vertices)                   // name of the vector is vertices

           cout << v << endl; 
   
        cout << cin.get();
  }

  // in c++ we can pass primitive/raw type like int,float but in other language you have to pass integer class, bcz it is C++ template
  //i= index operator to access
  // passing vector  into function or class making them reference(&) ensure we're not copying that entire array