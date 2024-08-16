#include<iostream>
using namespace std;
int num(int base,int power)
{
    int num = base*power;
    return num;
}
int main(){
int base;
int power;
cout<<"enter your num\n";
cin>>base>>power;
cout<<num;
num(base,power);
}
