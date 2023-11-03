/*Write a C program to input elements in array and print all negative 
elements.*/

#include<iostream>
using namespace std;

int main()
{
    int arr[5],I;
    
    cout<<"Janvi K.chavda";
    cout<<"220130318090";
    
    cout << "enter the value of array::";
    for(I=0;I<5;I++)
    {
        cin >> arr[I];
    }
    
    cout << "enters negative values are::";
    
    for(I=0;I<5;I++)
    {
        if(arr[I]<0){
            cout <<arr[I];
        }
        }
    }