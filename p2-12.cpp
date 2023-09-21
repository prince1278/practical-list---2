#include<iostream>  
using namespace std;  
int sum(int x, int y, int z=0, int w=0)    
{   
    return (x + y + z + w);   
}  
int main()  
{ 
cout<<"student name->thumar prince"<<endl;
		cout<<"en. no->220130318005"<<endl; 
    cout <<"this sum is->"<<sum(10, 15) << endl; 
    cout <<"this sum is->"<<sum(10, 15, 25) << endl;  
    cout <<"this sum is->"<<sum(10, 15, 25, 30) << endl;  
    return 0;  
}  
