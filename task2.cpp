#include <iostream>
using namespace std;

int calculate_cube1(int &a)     //pass by refrence.
{
	a=(a)*(a)*(a);
	cout<<"in function pass by refrence: "<<a<<endl;
	return a;
}


int calculate_cube2(int b)       //pass by value.
{
	b=(b)*(b)*(b);
	cout<<"in function pass by value: "<<b<<endl;
	return b;
}

int main()
{   int a,b;
    cout<<"enter 1st number: ";
    cin>>a;                       //take input from user.
	calculate_cube1(a);
	cout<<"1st number: "<<a<<endl<<endl;
	cout<<"enter 2nd number: ";
	cin>>b;
	calculate_cube2(b);
	cout<<"2nd number: "<<b;
}
