/*Write a C++ program to find the max of an integral data set. The program will ask the user to input the
number of data values in the set and each value. The program prints on screen a pointer that points to the
max value.*/


#include<iostream>
using namespace std;
int main()
{   int data,size,*p,*max=0;                                  
    cout<<"enter size of array: ";                
    cin>>size;                                        //taking size of array
    int array[size];
    cout<<"enter elements of array: ";
	for (int i=0;i<size;i++)
	{
		cin>>data;
		array[i]=data;                                 //input data in array
	}
	
		for (int i=0;i<size;i++)                       //nested loop for maximum
		{
			for (int j=0;j<size;j++)
			{
				if (array[i]>array[j])                 //logic for maximum
				{
					max=&array[i];               
					
				}
			}
		}
	
        cout<<*max;                                   //output on console
		
	
}
