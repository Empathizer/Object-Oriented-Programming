#include <iostream>
using namespace std;


void factorial(int n)   //function for factorial calculation

{    int fac=1;	

	 for (int i=1;i<=n;i++)                   
	 { 
	 
	 	fac=fac*i;
	 }
	cout<<"factorial of "<<n<<" is: "<<fac;
}
int main()
{
	int n=1;
	factorial(n);           //function call
}
