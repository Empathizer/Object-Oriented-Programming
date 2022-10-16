#include <iostream>
using namespace std;

int maximum(int arr[10])
{   int max=arr[0];
	for (int i=0;i<10;i++)
	{
		if (max<arr[i]){
		    max=arr[i];
		}
	} 
	     
    cout<<"maximum integer from an array is: "<<max;
}       

int main()
{   cout<<"enter elements of an array";
     
    int arr[10];
    for(int i=0;i<=10;i++)
	{
		cin>>arr[i];
	}   cout<<endl;
	
	maximum(arr);
}
