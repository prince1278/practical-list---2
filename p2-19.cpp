#include<iostream>
using namespace std;

int print(int &a,int &b);
int main()
{
	cout<<"student name->thumar prince"<<endl;
		cout<<"en. no->220130318005"<<endl;
	int a,b;
	cout<<"enter the number is->";
	cin>>a;
	cout<<"enter the number is->";
	cin>>b;
	
	print(a,b);
	return 0;
}
int print(int &a)
{
	 cout<<"this value is-> "<<a;	
}
