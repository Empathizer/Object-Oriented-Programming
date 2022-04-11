/*Q No.04: Write a C++ program that ask the user to input his/her full name (firstName lastName).
Change its 5th and 10th character to underscore _ and display the updated full name on the screen.
Hint: use getline() for full nam.*/
#include<iostream>
using namespace std;
int main()
{   string fullname;
	cout<<"enter your fullname ";
	getline(cin,fullname);
	cout<<"name before updation: "<<fullname<<endl;
	fullname[5]='_';
	fullname[10]='_';
	cout<<"name after updation: "<<fullname;
}