A object is an instance of class
A class is user defined data type that act as a blueprint of specific object 
  

class Herro{
  //properties 
  public:   //by defubing properties as public we can use properties outside of class
  int count; 
}
int main(){
  Herro c1;  //taking instance of class 
  cout<<sizeof(c1);    // gives 4 bit as class contain one interger.
  c1.count=3;
  cout<<c1.count;
}


if class contain no property then c1 will give 1 bit as a output for sizeof(c1)
