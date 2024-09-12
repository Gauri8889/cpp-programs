#include<iostream>
using namespace std;
class rbi
{
    public:virtual void loan() = 0;
    virtual void show() = 0;
};
class sbi:public rbi
{
    public: void loan()
    {
        cout<<"8.5%";
    }
    public:void show()
    {
        cout<<"sbi";
    }
};
int main()
{
    rbi *p;
    sbi s;
    p=&s;
    p ->show();
}
