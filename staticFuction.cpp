#include<iostream>
using namespace std;
class atmcard
{
    static int c;
    public:atmcard()
    {
        c++;
        cout<<c;
    }
};
int atmcard::c=0;
int main()
{
    atmcard A1;
    atmcard A2;
    atmcard A3;
}
