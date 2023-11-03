//Write a C++ program to demonstrate use of default arguments.
#include<iostream>
using namespace std;

float cir(float,float PI=3.14);

int main()
{
	float r;
	cout << "Mayuri R. Chavda"<<endl;
        cout << "220130318091"<<endl;
	cout<<"enter the radus of circle::";
	cin >>r;
	
	cout<<"circumference of the circle is ::"<<cir(r);
	
}
float cir(float x,float PI)
{
	return 2*PI*x;
}
