#include<iostream>
 using namespace std;
 class atm
 {
     int amount;
     public:atm(int r)
     {
         amount=r;
     }
     void show()
     {
    cout<<"Balance="<<amount<<"\n";
     }
 };
 int main()
 {
     atm k(10000);
     k.show();
     atm p=k;//implicit assignment copy constructor
     p.show();
     atm t(k);// shallow copy constructor
     t.show();
 }
