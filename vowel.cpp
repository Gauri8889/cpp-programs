#include<iostream>
using namespace std;
int main()
{
    int n,R,R1,N,Add;
    if(n>=1&&n<=500)
    {
        R=n*5;
    }
    else if(n>100&&n<=500)
    {
        R=100*5+(N-100)*7;
    }
    else if(n>500)
    {
        R=100*5+400*7+(N-100)*10;
    }
    else{
        cout<<"invalid"<<endl;
    }
    R==R1;
    Add=200/100*R;
    R=Add+R1;
}
