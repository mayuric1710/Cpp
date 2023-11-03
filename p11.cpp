//Write C++ Program To Find If A Character Is Vowel Or Consonant using function.

#include<iostream>
using namespace std;

bool vowels(char ch)
{
    switch (ch)
    {
        case 'a':
        case 'A':
        case 'e':
        case 'E':
        case 'i':
        case 'I':
        case 'u':
        case 'U':
        return true;
        
        default:
       return false;
     }
}

int main()
{
    char ch;
    
    cout << "Janvi K.chavda"<<endl;
    cout << "220130318090"<<endl;
    
    cout<<"enter a character::";
    cin >>ch;
    
    if(vowels(ch)==true)
    {
        cout<<"it's a vowel";
    }
    else
    {
        cout<<"it's a constant";
    } 
    
    }  