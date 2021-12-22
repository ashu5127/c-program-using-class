//C++ Program to Find Quotient and Remainder using class
#include<iostream>
using namespace std;
class Division
{
public:
    int n1,n2,quotient,remainder;
public:
    void enter()
    {

        cout<<"Enter two no";
        cin>>n1>>n2;

    }
    void display()
    {
    quotient = n1 / n2;
    remainder = n1 % n2;

    cout << "Quotient = " << quotient << endl;
    cout << "Remainder = " << remainder;


    }

    };
    int main()
    {

        Division d;
        d.enter();
        d.display();
        return 0;
    }
