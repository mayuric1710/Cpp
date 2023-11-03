/*Write a C++ program that create a class – ‘Employee’ that has data
members emp_id & emp_name and member function are getdata()
[to input data] & putdata() [to output data]. Write a main function to
create emp, an array of Empoyee objects. Accept and display the
details of at least 10 employees.*/
#include<iostream>
using namespace std;
class Employee{
	private:
		int emp_id;
		string emp_name;
	public:
		void getdata(){
			cout<<"\nEnter your emp_id:";
			cin>>emp_id;
			cout<<"Enter your emp_name";
			cin>>emp_name;
		}
		void putdata()
		{
			cout<<emp_id<<endl;
			cout<<emp_name<<endl;
		}
};
int main()
{
    cout<<"Janvi k. Chavda";
    cout<<"220130318090";
	Employee arr[10];
	for(int i=0;i<10;i++)
	{
		arr[i].getdata();
	
	}
	for(int i=0;i<10;i++)
	{
	    cout<<i+1<<"}";
		arr[i].putdata();
	}
}