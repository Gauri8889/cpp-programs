#include<iostream>
using namespace std;
class Client
{
     public:void virus()
     {
         cout<<"Hurry!!! you are System got hacked\n";
     }
};
class Reward
{
    Client c;
    public:void dollar()
    {
        cout<<"U got $100000000\n";
        c.virus();
    }
};
int main()
{
    Reward r;
    r.dollar();
}
