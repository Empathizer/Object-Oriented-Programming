#include<iostream>
using namespace std;
int main()
{
	int salary,a;
	cout<<"enter salary of employee: ";
	cin>>salary;
	
	if (salary < 10000)       //no deduction.
	     {
	     	cout<<salary;
		 }
	
	else if (salary >= 10000 && salary < 20000 ) //deduct Rs.1,000 as fund.
	     {
	     	cout<<salary-1000;
	     }
	     
	else if (salary >= 20000) //deduct 7 % of the salary for fund.
	{
		a=(salary/100)*7;
		cout<<a;
	}
}
