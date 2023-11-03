#include<iostream>
using namespace std;

class student{
	
	private:
		string name;
		int age;
		
	public:
		
		void get_details(){
			
			cout<<"enter your name:";
			cin>>name;
			cout<<"enter your age:";
			cin>>age;
		}
		
		void display_details(){
			
			cout<<"your name is ::"<<name;
			cout<<"your age is ::"<<age;
		}
};
int main()
{
	student s1;
	s1.get_details;
	s1.display_details;
}