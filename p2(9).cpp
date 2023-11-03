#include<iostream>
using namespace std;

int no1=5,no2=11;

int main()
{
	int no1=19,no2=23;
	cout << "Janvi k. Chavda"<<endl;
        cout << "220130318090"<<endl;
	cout<<"value of no1 as local data is ::"<<no1<<endl;
	cout<<"value of no2 as local data is ::"<<no2<<endl;
	cout<<"sum of no1 and no2 as local data is ::"<<no1+no2<<endl;
	
	cout<<"value of no1 as global data is ::"<<::no1<<endl;
	cout<<"value of no2 as global data is ::"<<::no2<<endl;
	cout<<"sum of no1 and no2 as global data is ::"<<::no1+::no2;
	
}