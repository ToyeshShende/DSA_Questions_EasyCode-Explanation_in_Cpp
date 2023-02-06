
#include <iostream>

using namespace std;
class Hero{
   private :
  int count;
  public:
  int level;
  
  
  int getcount(){
      return count;
  }
  int setcount(int count){  //for setting value
      count=34;
      return count;
  }
};
int main()
{   //static allocation
    Hero h1;
    cout<<sizeof(h1)<<" "<<sizeof(h1.level)<<endl;
    int cou=h1.getcount();  // accessing private accessed variables
    cout<<h1.setcount(cou)<<endl;  
    
    //dynamic allocation
    Hero *h2=new Hero;
    cout<<sizeof(h2->level)<<endl;
    //or
    cout<<sizeof((*h2).level)<<endl;
    
    

    return 0;
}
