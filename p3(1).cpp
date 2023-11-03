#include<iostream>
using namespace std;

struct student{

	string name;
	int std;
	float per;
		
}s1;

int main()
{
	int i;
	cout<<"Janvi k.Chavda"<<endl;
	cout<<"220130318090"<<endl;
	
	cout<<"\nenter your name:";
	cin>>s1.name;
	cout<<"which std are you studing:";
	cin>>s1.std;
	cout<<"enter your percentage:";
	cin>>s1.per;
	
	cout<<"entered data of student "<<i<<" is\n"<<s1.name<<"\n"<<s1.std<<"\n"<<s1.per;

}