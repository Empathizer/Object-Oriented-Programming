/*Write a program that asks the user to enter integers as inputs to be stored in the variables 'a' and 'b'
respectively. There are also two integer pointers named ptrA and ptrB. Assign the values of 'a' and 'b' to
ptrA and ptrB respectively, and display them.*/

#include <iostream>
using namespace std;
int main(){

int a,b,*ptrA,*ptrB;                                //declaration
cout<<"enter value of variable: ";
cin>>a;
cout<<"enter value of variable: ";
cin>>b;
ptrA=&a;
ptrB=&b;
cout<<"value for ptrA: "<<ptrA<<endl;               //output on console
cout<<"value for ptrB: "<<ptrB;

return 0;
}
