//Write a C program to enter radius of a circle and find its diameter,circumference and area.
#include<iostream>
#define PI 3.14
using namespace std;
int main()
{
    float r,dia,cir,area;
    
    cout<<"Janvi k. Chavda";
    cout<<"220130318090";
    
    cout << "enter the value of radius in c.m.";
    cin >> r;
    dia = 2*r;
    cir = 2*PI*r;
    area = PI*r*r;
    cout << "diameter::" << dia <<endl;
    cout << "circumference::" << cir <<endl;
    cout << "area::" << area;
}