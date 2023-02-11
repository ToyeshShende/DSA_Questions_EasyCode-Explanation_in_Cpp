
#include <iostream>
using namespace std;
class Hero {
    int health;
    char level;
    public: 
    //constructor overloading
    Hero(int health){
        this->health=health;  // we use this->health because if use this so there is no need to declare a new variable and store health in it 
    }
    Hero(int health,char level){  //paramatric contructor
        this->health=health;
        this->level=level;
    }
    void print(){
        cout<<this->health<<endl;
        cout<<this->level<<endl;
    }
};
int main()
{   Hero *h1=new Hero(23);
    h1->print();
    Hero *h2=new Hero(24,'n');
    h2->print();
    
    

    return 0;
}
