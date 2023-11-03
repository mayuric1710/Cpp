//Write a C program to enter length and breadth of a rectangle and find its perimeter & area.
#include<iostream>
using namespace std;
int main()
{
    float length,breadth,area,peri;

    cout <<"Janvji K. Chavda";
    cout <<"220130318090";
    cout << "enter the value of length in c.m.::";
    cin >> length;
    cout << "enter the value of breadth in c.m.::";
    cin >> breadth;
    
    area=length*breadth;
    peri=2*(length+breadth);

    cout <<"area of rectangle::" << area;
    cout <<"perimeter of rectangle::" << peri;

}