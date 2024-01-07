
#include <iostream>
using namespace std;

class Car
{

public:
    string name;
    string color;
    string milage;
    string gear;

    void getCarSpecifications()
    {
        cout << name << " "
             << "with a color of"
             << " " << color << " "
             << "having milage"
             << " " << milage << "kmph"
             << " "
             << "with gear of"
             << " " << gear << endl;
    }
};
int main()
{
    Car specification;
    specification.name = "Lamborgini",
    specification.color = "Red",
    specification.milage = "70",
    specification.gear = "4",

    specification.getCarSpecifications();
}