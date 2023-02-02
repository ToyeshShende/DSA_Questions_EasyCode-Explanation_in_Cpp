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



//tricky questions

#include <iostream>

using namespace std;

int main()
{
    int first=3;
    int second=4;
    int *third=&second;   //*third value become 4
    first=*third;   //first become 4
    *third=*third+2;   //*third is incremented by 2 so second will also incremented by 2
    cout<<first<<endl;
    cout<<second<<endl;
    cout<<&second<<endl;
    cout<<third<<endl;   //address of second

    return 0;
}

#include <iostream>

using namespace std;

int main()
{
    float f=12.5;
    float p=21.5;
    float *ptr=&f;
    (*ptr)++;
    *ptr=p;  // *ptr got 21.5 value as f's address is stored in ptr so f will also change
    cout<<f<<" "<<p<<" "<<*ptr<<endl;   // all print 21.5 

    return 0;
}
