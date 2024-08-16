#include<iostream>
using namespace std;
int main()

    /*int n,pwd;
    cout<<"enter the pwd\n";
    cin>>n;
    if(n<=4){
        cout<<"try again";
    }
    else if{
        cout<<"block";
}*/
/*int a= 90;
int b = -4;
int c=-34;
 a=--c;
c=b++;
b=++a;
cout<<a--;
cout<<--b;
co/ut<<c;
}*/
{
    int pv[]={20,10,3,4,6};
    for(int i=0;i<2;i++)
    {
        pv[i]=pv[i]+pv [i+1];
    }
    for(int i=0;i<4;i++)
    {

        cout<<pv[i]<<"\t";
    }
}

