#include<iostream>
using namespace std;
int main()
{   
    
	int x=10,y=15,z=20;  //variable declaration

    cout<<!(x > 10)<<endl;            //Statement 1
    
	cout<< (x <= 5 ) || (y < 15);     //Statement 2
	cout<<endl;
	
    cout<<(x != 5) && (y != z);       //Statement 3
    cout<<endl;
    
    cout<<(x >= z) || (x + y >= z);   //Statement 4
    cout<<endl;
    
    cout<<(x <= y - 2) && (y >= z) || (z - 2 != 20);    //Statement 5

}
