 #include<iostream>
 using namespace std;
 class RBI
 {
     public:RBI()
     {
         cout<<"RBI CONSTRUCTER\n";
     }
 };
 class SBI:public RBI
 {
     public:SBI()
     {
         cout<<"SBI CONSTRUCTOR\n";
     }
 };
 class AXIS:public RBI
 {
     public:AXIS()
     {
         cout<<"AXIS CONSTRUECTOR\n";
     }
 };
 class PNB:public RBI
 {
     public:PNB()
     {
         cout<<"PNB CONSTRUCTOR\n";
     }
 };
 int main()
 {
     SBI s;
     AXIS a;
     PNB p;
 }
