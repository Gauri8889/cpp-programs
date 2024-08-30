#include<iostream>
using namespace std;
class cybrom
{
    int a;
    public:cybrom(int b)
    {
        a=b;
    }
    void operator++()
    {
        a++;
        cout<<a;
    }

};
int main()
{
    cybrom obj(20);
    ++obj;

}
