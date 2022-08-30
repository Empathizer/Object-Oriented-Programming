#include<iostream>
using namespace std;
int main()
{   float a,b;
    char oper,c;
    c= 'y';            
	while(c=='y'){       //while loop for asking to continue or not 

    
	cout<<"enter a first number: "<<endl;  // taking numbers or operator from user
	cin>>a;
	cout<<"enter an operator: "<<endl;
	cin>>oper;
	cout<<"enter a second number: "<<endl;
	cin>>b;


	switch(oper){              //switch statement.
	
	
	case '+':                  //casses.
		cout<<a+b;
		break;
	
	case '-':
		cout<<a-b<<endl;
		break;
		
	case '*':
		cout<<a*b<<endl;
		break;
	
	case '/':
		cout<<a/b<<endl;
		break;	
		
	default:
		cout<<"enter operater between +,-,*,/"<<endl;  //default case.
		continue;
}
   
   cout<<"do another ? enter 'y' or 'n'";
   cin>>c;
}

}
