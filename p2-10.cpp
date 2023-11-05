#include<iostream>
using namespace std;
int print(int &p,int &q);
int main()
{
    cout<<"student name->thumar prince"<<endl;
		cout<<"en. no->220130318005"<<endl;
	int p,q;

	cout<<"Enter The Number P->";
	cin>>p;
	cout<<"Enter The Number Q->";
	cin>>q;
	
	print(p,q);
	return 0;
}
int print(int &p,int &q)
{
	cout<<"The Number's Multiplication is ->"<<p*q;
}

