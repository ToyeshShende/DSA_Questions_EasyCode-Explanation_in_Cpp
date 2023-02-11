

#include<iostream>
using namespace std;

class Test
{
public:
		Test()
	{
			cout<<"\n Constructor executed";
	}

	~Test()
		{
			cout<<"\n Destructor executed";
		}
};
int main()
{
	Test t; // defaultly call destructor for static allocation
	Test *t1=new Test();
	delete t1; // manually call Destructor for dynamic allocation
	
	
	return 0;
}
