//Write C++ Program to Check Whether a Number is a Palindrome or Not using function.

#include<iostream> 
using namespace std; 
void palindrome(int no); 
int main() 
{ 
    int num, no;
    cout << "Janvi k.chavda"<<endl;
    cout << "220130318090"<<endl;
    cout << "Enter the number to check if it's palindrome or not!!";
    cin >> num;
    no = num;
    palindrome(no);
    
     return 0;
} 

void palindrome(int no)
{ 
    int rem, rev = 0, temp = no;
    
    while (no != 0)
    { 
        rem = no % 10;
        rev = rev * 10 + rem; 
        no = no / 10;
    } 
    
    if (temp == rev) 
    {
        cout << "palindrome";
    } 
    else 
    {
        cout << "not"; 
    } 
    
}