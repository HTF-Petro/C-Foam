#include <iostream>
using namespace std;

class Car{
          
     public:
        string make;
        string model;
        int  year;
        string color;

     Car(string make,string model,int year,string color){
          
             this-> make = make;
             this-> model= model;
             this-> year = year;
             this-> color = color;    

        }
     };


int main(){
     
      Car car1("Toyota","Corolla",2005,"Black");

              cout<< car1.make<< '\n';
              cout<< car1.model<< '\n';
              cout<< car1.year<< '\n';
              cout<< car1.color<< '\n';
    



    return 0;


      }