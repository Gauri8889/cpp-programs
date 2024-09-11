//multiple inheritance:-
#include<iostream>
using namespace std;
class AXIS
{
    public:AXIS()
    {
        cout<<"\n AXIS\n";
    }
    ~AXIS()
    {
        cout<<"AXIS DEL\n";
    }
};
class SBI
{
    public:SBI()
    {
        cout<<"SBI\n";
    }
};
class CUST:public SBI,public AXIS
{
    public:CUST()
    {
        cout<<"\n CUST\n";
    }
    ~CUST()
    {
        cout<<"CUST DEL\n";
    }
};
int main()
{
    CUST c;
}
