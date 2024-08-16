#include<iostream>
using namespace std;
int main()
{
    int chotu;
    int a[5]={10,21,30,41,5};
    chotu =a[0];
    for(int i=0;i<5;i++)
    {
     if(chotu>a[i])
     {
         chotu=a[i];
     }
    }
     cout<<"min="<<chotu;
}
