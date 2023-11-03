#include <iostream>
using namespace std;
class shape{
public:
double area(int l,int b){
    return l*b;
}
double area(double r, int dummy)
{
    return 3.14*r*r;
}
double area(int side){
    return side*side;
}};

int main()
{
    shape s1;
   double rect=s1.area(5,6);
   double cir=s1.area(4.5,0);
   double sq=s1.area(5);
    
    cout<<rect<<endl;
    cout<<cir<<endl;
    cout<<sq<<endl;

}