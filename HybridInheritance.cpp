 #include<iostream>
 using namespace std;
 class A
 {
     public:void f1()
     {
         cout<<"A class\n";
     }
 };
 class B:virtual public A
 {
     public:void f2()
     {
         cout<<"B class\n";
     }
 };
 class C: virtual public A
 {
     public:void f3()
     {
      cout<<"C class\n";
     }
 };
 class D:public B, public C
 {
     public:void f4()
     {
         cout<<"D class\n";
     }
 };
 int main()
 {
     D obj;
     obj.f2();
     obj.f3();
     obj.f4();
     cout<<sizeof(D);
 }

