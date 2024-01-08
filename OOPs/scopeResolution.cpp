#include <iostream>
using namespace std;

int a = 10;

int main(){
    int a = 25;

    cout<<"Local variable is :"<<a<<endl;

    cout<<"Global variable is :"<<::a<<endl;
    
}