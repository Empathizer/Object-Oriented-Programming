#include<iostream>
using namespace std;
int main()
{  
    int x=5;                   //declare x for num of iterations.
	for (int i=0;i<5;i++)      
	  {                            //nested loop 
	    for(int j=0;j<x;j++)   
	   {
	   	cout<<"*";             //for output on console
	   	 
	   }
	      x=x-1;              //decrement in x after each line.
	   	  cout<<endl;         
	   }
}
