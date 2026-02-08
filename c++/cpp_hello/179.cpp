#include <iostream>
#include <math.h>
using namespace std;

class CAR_GRAJ 
{
public:
    string Model_name;
    int yers;
    string Name;
    long int car_index;


    void info(){
        cout << "Mashina ma'lumoti:"<< endl;
        cout << "Model: " << Model_name << endl <<  "Yili: " << yers << endl << "Mashina nomi: " << Name << endl << "Mashina id: " << car_index << endl;
    }

};



int main(){
    CAR_GRAJ CAR_1;

    CAR_1.Model_name = "Chevralet";
    CAR_1.yers = 2006;
    CAR_1.Name = "Damas";
    CAR_1.car_index = 4135135134513;


    CAR_1.info();
    
}
