#include<iostream>
using namespace std;
/*int product(int qty)
{
    return qty*500;
}
int main()
{
    int qty;
    cout<<"enter quantity\n";
    cin>>qty;
    <<product(qty)+product(qty)/10;
}*/
/*void swp(int &a, int &b)//call by refrence:-extra memory create nhi hoti
{
    int tmp;
    tmp=a;
    a=b;
    b=tmp;
    cout<<"after swapping a="<<a<<"\t";
    cout<<"after swapping b="<<b<<"\t";
}
int main()
{
    int a,b;
    cout<<"enter 2 value\n";
    cin>>a>>b;//6//7 call by value :-isme extra memory create hoti hai|
    swp(a,b);
    cout<<a<<"\t"<<b;
}*/

//parameter as array
void funarr(int a[],int s)
{
    for(int i=0;i<s;i++)
    {
        a[i]=a[i]+10;
      // if(a[i]%2==0)
      //cout<<a[i]<<"\t";
    }

    }
int main()
{
    int a[]={56,4,23,6,7};
    int s=sizeof(a)/sizeof(a[0]);
    funarr(a,s);
   for(int i=0;i<s;i++){
    cout<<a[i]<<"\t";
   }

}
