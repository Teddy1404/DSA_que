#include<iostream>
using namespace std;


class goku{
      private:
    char level = 'a';
    public:
    int health = 100;
  

    int getHealth(){
        return health;
    }
    char getLevel()
    {
        return level;

    }

    void setHealth(int h){
        health = h;
    }
    void setLevel(char l){
        level = l;
    }

    goku()
    {
        cout<<"constructor called"<<endl;
    }

    //parametrized constructor
    goku(int health){
        cout<<"this"<<this<<endl;
        this -> health = health;
    }
     goku(int health,char level){
        this ->level = level;
        this -> health = health;
    }
};

int main(int argc, char const *argv[])
{
//     goku g;
//   g.setHealth(90);
//   cout<<"Goku health------>"<<g.getHealth()<<endl;
//   g.setLevel('b');
//   cout<<"Goku level------>"<<g.getLevel()<<endl;

//stactic
   goku g(10);
   cout<<"adddres of goku"<< &g<<endl;;
  g.getHealth();
   //dynamic 
  goku *h = new goku;

    return 0;
}
