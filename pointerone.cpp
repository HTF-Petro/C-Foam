# include <iostream>
using namespace std;

int main(){
     string name = "Nazrul";

     string *pName = &name;

     cout << *pName;


    return 0;
}