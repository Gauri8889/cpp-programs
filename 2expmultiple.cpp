//Diemand problem inhataitese one where child class
// and each parent class having  same fuction
#include<iostream>
using namespace std;
class SBI
{
    public:void msg()
    {
        cout<<"SBI\n";
    }
};
class AXIS
{
    public:void msg()
    {
        cout<<"AXIS\n";
    }
};
class CUSTOMER:public SBI,public AXIS
{
    public:void custmsg()
    {
        cout<<"CUSTMER\n";
    }
};
int main()
{
    CUSTOMER obj;
    //obj.msg();//Diamond problem
   // obj.SBI::msg();
    //obj.AXIS::msg();//slicing
   // SBI s=obj;//type casting
    //AXIS g=obj;
    //g.msg();
    static_cast<AXIS>(obj).msg();
}
