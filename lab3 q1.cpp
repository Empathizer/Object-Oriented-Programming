
#include<iostream>
using namespace std;
int main()
{   int a;
	cout<<"enter any number";
	cin>>a;
	for (int i=1;i<=100;i++)
	{
		cout<<i*a;     
		cout<<" ";
		if(i%10==0)         //new line after every 10th number
		{
			cout<<endl;
		}
	}
}
