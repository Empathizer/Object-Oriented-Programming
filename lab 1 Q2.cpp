/*Q No.2: Write a program in C++ that ask a user to enter radius and calculate the volume of a
sphere. After calculating the volume, print the output on screen.*/

#include<iostream>
using namespace std;
int main()
{   float radius,volume,pi=3.14,r;
	cout<<"enter radius of sphere";
	cin>>radius;
	r=radius*radius*radius;
	volume=4/3*pi*r;
	cout<<volume;
}