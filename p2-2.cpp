#include <iostream>
using namespace std;
class temp
{
    public:
        int a;
        static int b;
        void display()
        {
            cout << "a-> " << a <<endl;
            cout << "b->" << b <<endl;
        }
};
int temp ::b=0;
int main()
{
    cout<<"student name->thumar prince"<<endl;
		cout<<"en. no->220130318005"<<endl;
	temp t;
    t.display();
   
    return 0;
}

