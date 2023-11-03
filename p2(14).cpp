//Write a C++ program to calculate cube of a given number using inline function
#include<iostream>
using namespace std;
inline int cube(int );
int main()
{
	int a,i;
	cout<<"Janvi k. Chavda"<<endl;
	cout<<"220130318090"<<endl;
	for(i=0;i<3;i++){
	
	cout<<"enter the value ";
	cin>>a;
	
	cout<<"cube:"<<cube(a)<<endl;
}
}
inline int cube(int x)
{
	return x*x*x;
}