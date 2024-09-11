#include<iostream>
using namespace std;
class RBI
{
    public:virtual void loan()
    {
        cout<<"Approved By RBI\n";
    }
};
class SBI:public RBI
{
    public:void accnt()
    {
        cout<<"SBI Account\n";
    }
    void loan()
    {
        cout<<"50000\n";
    }
};
class AXIS:public SBI
{
    public:void accntsaving()
    {
        cout<<"AXIS Account\n";
    }
    void loan()
    {
        cout<<"60000\n";
    }
};
int main()
{
    RBI *p;
    RBI t;
    p=&t;
    p ->loan();
    SBI s;
    p=&s;
    p ->loan();
}
