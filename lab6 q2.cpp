#include <iostream>
using namespace std;
class Laptop{
	private:
		
		string brand;
		string model;
		int serial;
		string color;
		float price;
		float processorSpeed;
		int ram;
		float screenSize;
	
	public:
		void setbrand();
		void setmodel();
		void setserial();
		void setcolor();
		void setprice();
		void setprocessorSpeed();
		void setram();
		void setscreenSize();
		int upraderam(int);
};

void Laptop::setbrand()
{   cout<<"enter screen size"<<endl;
    cin>>brand;
}

void Laptop::setmodel()
{
	cout<<"enter model"<<endl;
	cin>>model;
}

void Laptop::setserial()
{
	cout<<"enter serial number"<<endl;
	cin>>serial;
}

void Laptop::setcolor()
{
	cout<<"enter color"<<endl;
	cin>>color;
}

void Laptop::setprice()
{
	cout<<"enter price"<<endl;
	cin>>price;
}

void Laptop::setprocessorSpeed()
{
	cout<<"enter processor speed"<<endl;
	cin>>processorSpeed;
}

void Laptop::setram()
{
	cout<<"enter ram"<<endl;
	cin>>ram;
}

void Laptop::setscreenSize()
{
	cout<<"screenSize"<<endl;
	cin>>screenSize;
}

int Laptop::upraderam(int upgradedRam)
{
	ram=ram+upgradedRam;
	cout<<ram;
}


int main()
{
	Laptop l1;
	    int upgradedRam;
		l1.setbrand();
		l1.setmodel();
		l1.setserial();
		l1.setcolor();
		l1.setprice();
		l1.setprocessorSpeed();
		l1.setram();
		l1.setscreenSize();
		cout<<"enter upgraded Ram:"<<endl;
		cin>>upgradedRam;
		l1.upraderam(upgradedRam);
}




