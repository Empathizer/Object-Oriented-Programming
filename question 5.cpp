/*Take input in variable and display same value by pointer. Also display the memory address of the variable.*/

#include<iostream>
using namespace std;
int main()

{
	int a,*ptrA;
    cout<<"enter value of variable a: ";            
    cin>>a;
    ptrA=&a;
    cout<<" same value by pointer: "<<*ptrA<<endl;            //output on console
    cout<<" memory address of the variable: "<<ptrA;
    return 0; 
    
}
