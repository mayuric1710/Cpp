//Write a C++ program to demonstrate use of constant argument
#include<iostream>
using namespace std;

double cone(float,float,const float PI=3.14);

int main()
{
	float r,l,ans;
	
	cout<<"Janvi k. Chavda"<<endl;
	cout<<"220130318090"<<endl;
	cout<<"enter the radius of cone";
	cin >> r;
	cout<<"enter the length of cone";
	cin>>l;
	cout<<cone(r,l,3.14);
}
double cone(float r,float l ,const float PI)
{
	return PI*r*l;
}