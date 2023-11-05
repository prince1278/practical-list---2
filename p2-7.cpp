#include<iostream>
using namespace std;

enum boolean{f,t};

int main()
{
    cout<<"student name->thumar prince"<<endl;
		cout<<"en. no->220130318005"<<endl;
	cout<<"Enter the false or true ->"<<endl;
	cout<<"False  "<<f<<endl;
	cout<<"True   "<<t<<endl;
	
	cout<<endl<<"A  "<<"B"<<"	Y"<<endl;
	cout<<"0  "<<"0	"<<		f*f<<endl;
	cout<<"0  "<<"1	"<<		f*t<<endl;
	cout<<"1  "<<"0	"<<		t*f<<endl;
	cout<<"1  "<<"1	"<<		t*t<<endl;
	
	return 0;
}

