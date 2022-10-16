/*Create a structure called time. Its three members, all type int, should be called hours, minutes, and
seconds. Write a program that prompts the user to enter a time value in hours, minutes, and seconds. The
program should then store the time in a variable of type struct time, and finally print out the total number
of seconds.*/


#include <iostream>
using namespace std;
struct time{
	
	int hours;                       //declaraion of member variables
	int minutes;
	int seconds;
	int time_value(int,int,int);    //declaration of member function
	int time;
	
};
int time:: time_value(int hours,int minutes,int seconds)             //definition of member function
{
	 time=(hours)*(3600)+(minutes)*(60)+(seconds);
	 cout<<time;
	 return seconds;

}

int main()
{
	time t1;
	cout<<"enter number of hours";                                //taking input 
	cin>>t1.hours;
	cout<<endl;

    cout<<"enter minutes";
	cin>>t1.minutes;
	cout<<endl;

	cout<<"enter number of seconds";
	cin>>t1.seconds;
	
	t1.time_value(t1.hours,t1.minutes,t1.seconds);               //function call
	
}
