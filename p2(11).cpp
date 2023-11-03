//Write a C++ program to demonstrate use of return by reference
#include<iostream>
using namespace std;

int &instance();
int a=11;

int main()
{
        cout << "Janvi k. chavda"<<endl;
        cout << "220130318090"<<endl;
	cout<<a<<endl;
	instance()=5;
	cout<<a;
	return 0;
}
int &instance()
{
	return a;
}