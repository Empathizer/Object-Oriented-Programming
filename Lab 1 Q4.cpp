//Q No.03: Ask user to enter a five-digit number and then display the last 3 digits in reverse order


#include<iostream>
using namespace std;
int main()
{
	int num,a,b,c;
	cout<<"enter 5 digits number: ";
	cin>>num;
	a=num%10;
	cout<<a;
	b=(num%100)/10;
	cout<<b;
	c=(num%1000)/100;
	cout<<c;
	return 0;
}