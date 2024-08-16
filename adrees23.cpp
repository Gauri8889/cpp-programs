#include<iostream>
using namespace std;
int main()
{
int a=300;
int *p;
cout<<&p<<"\n";
cout<<&a;
p=&a;
cout<<*p;
}

/*int a[]={43,5,2,7,8};
cout<<*(a+2)+10<<"\n";//12
cout<<*a+2;//45

}*/

//**
/*int a=10;
cout<<"a="<<&a<<"\n";
int *b=&a;
cout<<"b="<<&b<<"\n";
int **c=&b;
cout<<c;
}*/
