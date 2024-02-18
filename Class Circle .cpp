#include<iostream>
using namespace std;
class Circle
{
	int radius;
 public:
void getradius()
{
	cout<<"\n Enter Radius:";
	cin>>radius;
}
void displayarea()
{
	float PI = 3.14;
	cout<<"\n Area of the Circle is :";
	cout<<"\n Your area of the circle is:"<< PI*radius*radius;
}
};
int main()
{
 Circle c1,c2,c3;
 c1.getradius();
 c1.displayarea();
 c2.getradius();
 c2.displayarea();
 c3.getradius();
 c3.displayarea();
return 0;	
}
