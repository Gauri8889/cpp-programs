#include<iostream>
using namespace std;
class sbi
{
    int amount=10000;
    void info()
    {
        cout<<"customer of SBI\n";

    }
    friend class axis;
};
class axis
{
    public:void show(sbi s)
    {
        cout<<"balance="<<s.amount<<"\n";
        s.info();
    }
};
int main()
{
    sbi s1;
    axis a;
    a.show(s1);
}
