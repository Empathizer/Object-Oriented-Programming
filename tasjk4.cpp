#include<iostream>
using namespace std;
int main()
{   
    int array3[3][3];                                //arrays definition 
	int array1[3][3]={{3,4,5},{6,7,8},{2,4,5}};
	int array2[3][3]={{3,4,5},{6,7,8},{2,4,5}};
	
   cout<<"elements of array1"<<endl;                //output array1
   for(int i=0;i<3;i++)
	  {
	  	for(int j=0;j<3;j++)
		  {
	  	   cout<<array1[i][j]<<" ";
          }
          cout<<endl;

	  }
	cout<<"elements of array2"<<endl;             //output array2
	for(int i=0;i<3;i++)
	  {
	  	for(int j=0;j<3;j++)
		  {
	  	   cout<<array1[i][j]<<" ";
	  	   
           }
        cout<<endl;
	  }

	  for (int i=0;i<3;i++)                     //sum of array 1 and 2.
	  {
	  	for(int j=0;j<3;j++)
	  	array3[i][j]=array1[i][j]+array2[j][j];
	  	
	  }
	  
	  cout<<"sum of array 1 and 2 is"<<endl;   //output array3.
	  for(int i=0;i<3;i++)
	  {
	  	for(int j=0;j<3;j++){
	  	   cout<<array3[i][j]<<" ";
	  	    
}
            cout<<endl;
	  }
}
