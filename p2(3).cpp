//Write a C++ program to define a function outside the class using scope resolution operator.
#include<iostream>
#include<string>
using namespace std;
class contact_list{
		
		private:
			string name;
			long long int phone_no; 
			long long int additional_no;
			
		public:
			void putdata();
			void getdata();
};

void contact_list :: putdata(){
	
		cout << "enter your name::";
		cin  >> name;
		cout << "enter your contact no::";
		cin  >> phone_no;
		cout << "enter additional contact no::";
		cin  >> additional_no;
	
}
void contact_list :: getdata(){
	
		cout << "enter your name::"<<name<<endl;
		cout << "enter your contact no::"<<phone_no<<endl;
		cout << "enter additional contact no::"<<additional_no;
	
}
int main(){
	
		cout<<"Janvi k. Chavda"<<endl;
		cout<<"220130318090"<<endl;
		contact_list A;
		A.putdata();
		A.getdata();
	
}