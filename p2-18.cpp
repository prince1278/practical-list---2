#include<iostream>
#define PI 3.14
using namespace std;
class area
{
	private:
		float r;
	public:
		void circle(float r)
		{
			cout<<"this value is-> "<<PI*r*r;
		}
};
int main()
{
	cout<<"student name->thumar prince"<<endl;
		cout<<"en. no->220130318005"<<endl;
	area p;
	p.circle(9);	
	return 0;
}
