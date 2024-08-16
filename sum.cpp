#include<iostream>
using namespace std;
int main()
{
    int a=1;
    int sum=0;
    do{

        sum=a+sum;
        a++;

    }
    while(a<=10);
     cout<<sum<<"\n";
     return 0;


}
