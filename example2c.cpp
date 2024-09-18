#include<iostream>
#include<string.h>
using namespace std;
class tcs
{
    char name[10];
    int Sal;
    public:tcs(char n[10],int s)
    {
        strcpy(name,n);
        Sal=s;
    }
    void show()
    {
        cout<<"salary="<<Sal<<"\n";
        cout<<"name="<<name;
    }
};
int main()
{
    tcs t("amit",2000);
    t.show();
}
