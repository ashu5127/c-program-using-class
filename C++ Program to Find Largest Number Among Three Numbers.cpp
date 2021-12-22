//C++ Program to Find Largest Number Among Three Numbers
#include<iostream>
using namespace std;
class Largest
{
 public:
     int n1,n2,n3;
 public:
    void enter()
    {

        cout<<"Enter three no"<<endl;
        cin>>n1>>n2>>n3;

    }
    void display()
    {
      if(n1>n2&&n1>n3)
      {


        cout<<"Largest number: " <<n1;
      }
      if(n2>n1&&n2>n3)
      {


        cout<<"Largest number: " <<n2;}
      if(n3>n1&&n3>n2)
      {


        cout<<"Largest number: " <<n3;
      }

    }


};
int main()
{

    Largest l;
    l.enter();
    l.display();
    return 0;
}
