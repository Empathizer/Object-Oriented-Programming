/*A point on the two-dimensional plane can be represented by two numbers: an x coordinate and a y
coordinate. For example, (4,5) represents a point 4 units to the right of the vertical axis, and 5 units up
from the horizontal axis. The sum of two points can be defined as a new point whose x coordinate is the
sum of the x coordinates of the two points, and whose y coordinate is the sum of the y coordinates.

Write a program that uses a structure called point to model a point. Define three points, and have the user
input values to two of them. Then set the third point equal to the sum of the other two, and display the value
of the new point. Interaction with the program might look like this:
Enter coordinates for p1: 3 4
Enter coordinates for p2: 5 7
Coordinates of p1+p2 are: 8, 11*/


#include <iostream>
using namespace std;
struct point{
	int x;                                        //declaration of cordinates
	int y;
};
int main()
{
	point p1,p2,p3;
    cout<<"enter cordinate for p1(x,y)";
	cin>>p1.x>>p1.y;                              //taking input x1 and y1 

	cout<<"enter cordinate for p2(x,y)";
	cin>>p2.x>>p2.y;                              //taking input x2 and y2
	
	p3.x=p1.x+p2.x;
	cout<<"sum of x cordinates of p1+p2: "<<p3.x<<endl;                               //sum of x cordinates
	p3.y=p1.y+p2.y;
	cout<<"sum of y cordinates of p1+p2: "<<p3.y;
}

