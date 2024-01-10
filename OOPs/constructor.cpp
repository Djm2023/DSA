 
#include <iostream> 
using namespace std; 
class Student
{ 
	public: 
	int id; 
	
	//Default Constructor 
	Student() 
	{ 
		cout << "Default Constructor called" << endl; 
		id=1; 
	} 
	
	//Parameterized Constructor 
	Student(int rollNo) 
	{ 
		cout <<"Parameterized Constructor called "<< endl; 
		id=rollNo; 
	} 
}; 
int main() { 
	
	// obj1 will call Default Constructor 
	Student obj1; 
	cout <<"Student id is: "<<obj1.id << endl; 
	
	// obj2 will call Parameterized Constructor 
	Student obj2(2); 
	cout <<"Student id is: " <<obj2.id << endl; 
	 
} 
