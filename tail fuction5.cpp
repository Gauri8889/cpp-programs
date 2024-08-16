#include<iostream>
using namespace std;
int dsc(int n)
{
    if(n==0)
    {
        return 0;

    }
     dsc(n-1);//head recursion
    cout<<n<<"\t";
    //dsc(n-1);//tail recorsion
}
int main()
{
    dsc(5);
}
