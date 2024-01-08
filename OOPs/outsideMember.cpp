#include<iostream>
using namespace std;

class Student {
    public:
    string name;
    int rollNo;

    void printName();

    void printRollNumber(){
        cout<<"Roll Number is :"<<" "<<rollNo;
    }
};

void Student::printName(){
 cout<<"Name of the student is:"<<" "<<name<<endl;
}
int main(){
    Student info;

    info.name = "Devjyoti";
    info.rollNo = 01;
    
    info.printName();

    info.printRollNumber();
    cout<<endl;

}