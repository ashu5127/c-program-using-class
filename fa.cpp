//Write a c++ program to print fibonacci series
#include <iostream>
using namespace std;
class Fib
{
public:
    int n1=0,n2=1,n3,no;
public:
    void dis()
    {

        cout<<"Enter no of fbi sreies;"<<endl;
        cin>>no;
        cout<<n1<<" "<<n2<<" ";

    }
    void display()
    {

        for(int i=2;i<no;i++)
        {


        n3=n1+n2;
       cout<<n3;
       cout<<" ";
        //n1=n2;
        //n2=n3;
        }


    }
};
int main()
{
Fib f;
f.dis();
f.display();
return 0;

}
