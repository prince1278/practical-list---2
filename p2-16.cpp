#include<iostream>
using namespace std;
class area
{
	private:
	int a,b;
	int p;
	double r;
	
	public:
	void Area (int a,int b)
	{
		cout<<"volue of ->"<<a*b<<endl;
	}
	void Area(int p)
	{
		cout<<"value of ->"<<p*4<<endl;
	}
	void Area(double r)
	{
		cout<<"value of ->"<<3.14*r*r<<endl;
	}
};
int main ()
{
	cout<<"student name->thumar prince"<<endl;
		cout<<"en. no->220130318005"<<endl;
	area v;
	v.Area(2,6);
	v.Area(30);
	v.Area(5.45);
	return 0;
}
