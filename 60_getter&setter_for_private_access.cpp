  

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
{
    Hero h1;
    cout<<sizeof(h1)<<" "<<sizeof(h1.level)<<endl;
    int cou=h1.getcount();  // accessing private accessed variables
    cout<<h1.setcount(cou)<<endl;  
    

    return 0;
}
