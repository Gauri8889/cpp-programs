/*it use to exex the propety of parent class  and with the help of it we use less code
there are 5 type of inheritence
1 single inheritece
2 multiple inheritece
3 multilevel
4 hiera

1 single inheritence:- in a single inheritence we use to classes where the first class is called parent class and root class and the second class is called the child class we always
create and object and child class and with the help of it we can exes the dada member and member fuction
syntex:

class A
{
};
class B:public A
{

};*/

#include<iostream>
using namespace std;
class RBI
{
    int a=90;
    public:void show()
    {
        cout<<"RBI ="<<a<<"\n";
    }
};
class SBI:public RBI
{
    int d;
    public:void fshow()
    {
        cout<<"SBI =" <<d<<"\n";
    }
};
int main()
{
    SBI s;
    cout<<sizeof (s)<<"\n";
    s.show();
    s.fshow();
}

