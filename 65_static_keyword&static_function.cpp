
#include<iostream>
using namespace std;

class Test
{  
public:
    static int val;
		Test()
	{
			cout<<"\n Constructor executed";
	}
	static void toy(){
	    cout<<val<<endl;  // static function can access only static variables
	    
	} 
};
int Test::val=34;
int main()
{
	cout<<Test::val<<endl;
	Test::toy();
	
	return 0;
}
