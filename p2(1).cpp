//Write a C++ program to access global variable using scope resolution operator without using class
#include<iostream>
using namespace std;

	int a=5;
		
int main(){

		int a=10;
		
		cout<<"Janvi k. Chavda"<<endl;
		cout<<"220130318090"<<endl;

		cout<< "value of a as a global variable is "<<a<<endl;
		cout<< "value of a as a local variable  is "<<::a<<endl;
        return 0;
		
}