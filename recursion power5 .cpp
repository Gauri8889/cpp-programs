//WAP for recursion using power
#include<iostream>
using namespace std;
int power(int pow,  base)
{


        if(pow==1)
        {
            return 1;
        }

     int r;
     power=pow*base power(pow ,base-1);
    return power;
}
int main()
{
    cout<<pow(4,2);
}
