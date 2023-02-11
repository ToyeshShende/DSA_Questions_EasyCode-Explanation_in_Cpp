// C++ program to implement the shallow copy
#include <iostream>
using namespace std;

// Box Class
class box {
private:
	int length;
	int* breadth;
	int height;

public:
	// Constructor
	box()
	{
		breadth = new int;
	}

	void set_dimension(int len, int brea,
					int heig)
	{
		length = len;
		*breadth = brea;
		height = heig;
	}
   void setbreadth(int bre){
     *breadth=bre;
   }
	void show_data()
	{
		cout << " Length = " << length
			<< "\n Breadth = " << *breadth
			<< "\n Height = " << height
			<< endl
			<<endl;
	}
};
int main()
{
	box first;
	first.set_dimension(12, 14, 16);
	first.show_data();
	box second = first; //default copy 
	second.show_data();
    first.setbreadth(34); // if change first paramerter then as first and second have same memory of breadth store so the second also change 
    second.show_data();
	return 0;
}







// C++ program to implement the deep copy
#include <iostream>
using namespace std;

// Box Class
class box {
private:
	int length;
	int* breadth;
	int height;

public:
	// Constructor
	box()
	{
		breadth = new int;
	}

	void set_dimension(int len, int brea,
					int heig)
	{
		length = len;
		*breadth = brea;
		height = heig;
	}
   void setbreadth(int bre){
     *breadth=bre;
   }

	void show_data()
	{
		cout << " Length = " << length
			<< "\n Breadth = " << *breadth
			<< "\n Height = " << height
			<< endl;
	}

	// Parameterized Constructors for
	// for implementing deep copy
	box(box& sample)
	{
		length = sample.length;
		breadth = new int;
		*breadth = *(sample.breadth);
		height = sample.height;
	}

	// Destructors
	~box()
	{
		delete breadth;
	}
};

// Driver Code
int main()
{

	box first;

	first.set_dimension(12, 14, 16);

	first.show_data();

	box second = first; //custom copy
	second.show_data();
    first.setbreadth(34);
    
    second.show_data(); //as above in custom copy we created new memory to store breadth so here if we change first the second will not change 
	return 0;
}



 	Shallow Copy 	                                                                                                                 Deep copy
1.	When we create a copy of object by copying data of all member variables as it is, then it is called shallow copy 	        1)When we create an object by copying data of another object along with the values of memory resources that reside outside the object, then it is called a deep copy
2.	A shallow copy of an object copies all of the member field values.	                                                      2)Deep copy is performed by implementing our own copy constructor.
3.	In shallow copy, the two objects are not independent	                                                                     3)It copies all fields, and makes copies of dynamically allocated memory pointed to by the fields
4.	It also creates a copy of the dynamically allocated objects	                                                                4)If we do not create the deep copy in a rightful way then the copy will point to the original, with disastrous consequences.

