#include<iostream>
using namespace std;
int add;
int&sum(int a,int b);
int main()
{
	cout<<"student name->thumar prince"<<endl;
		cout<<"en. no->220130318005"<<endl;
		int a,b,ans;
		cout<<"enter the value of a->";
		cin>>a;
		cout<<"enter the value of b->";
		cin>>b;
		ans=sum(a,b);
		cout<<" this sum of A+B is->"<<ans<<endl;
		
}
int&sum(int a,int b)
{
	add=a+b;
	return add;
	
}
