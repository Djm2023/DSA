#include <iostream>
using namespace std;

class student
{
public:
    string name;
    int rollNumber;

    void printStudentInfo()
    {
        cout << "My name is"
             << " " << name << " "
             << "and my Roll no is"
             << " " << rollNumber << endl;
    }
};

int main(){
student studentInfo;

studentInfo.name = "Devjyoti Mukherjee";
studentInfo.rollNumber=01;

studentInfo.printStudentInfo();
}