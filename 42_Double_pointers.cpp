#include <iostream>

using namespace std;

int main()
{
    int value=3;              // value-->3(100)      ptr1-->100(110)   ptr2-->110(120)   
    int *ptr1=&value;        //            address
    int **ptr2=&ptr1;
    cout<<&ptr1<<endl;
    cout<<ptr1<<"-->"<<*ptr1<<endl;
    cout<<ptr2<<"-->"<<*ptr2<<"-->"<<**ptr2<<endl;  //*ptr2 gives 100 as a address and ptr1 also give 100 
                                            // we can access 3 as *ptr1 or **ptr2 
                                            //ptr2 gives us 110 which is address of ptr1 so it can also obtained by &ptr1  
    return 0;
}
