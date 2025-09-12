#include <iostream>
#include <string>
using namespace std;

class Car{
    public:
    string Brand;
    int Year;


   void honk(){
    cout <<"Beep Beep"<<endl;
   }

};   


int main()
{
    Car myCar;
    myCar.Brand = "Audi";
    myCar.Year = 2025;

    cout <<"Car Brand:"<<myCar.Brand<<endl;
    cout <<"Car Year:"<<myCar.Year<<endl;
    
    myCar.honk();
    return 0 ;
};