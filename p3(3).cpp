#include<iostream>
using namespace std;

struct employee{
	
	string name;
	int code;
	int salary;
	string branch;
	
}E1;

int main()
{
  cout<<"Janvi k. Chavda"<<endl;
	cout<<"220130318090"<<endl;
	cout<<"enter employee name:";
	cin>>E1.name;
	cout<<"enter employee code:";
	cin>>E1.code;
	cout<<"enter employee salary:";
	cin>>E1.salary;
	cout<<"enter employee branch:";
	cin>>E1.branch;
	
	cout<<"entered data is "<<E1.name<<"\n"<<E1.code<<"\n"<<E1.salary<<"\n"<<E1.branch;
}