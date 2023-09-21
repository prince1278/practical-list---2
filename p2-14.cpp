#include <iostream>
#include <cmath>
using namespace std;
int cube(int a)
{
return(a*a*a);
}

int main()
{
	cout<<"student name->thumar prince"<<endl;
		cout<<"en. no->220130318005"<<endl;
   
           int number;
           cout << "enter the number->";
           cin >> number;
           int res=cube(number);
           cout << "cube obtained->" << res; 
           return 0;
}
