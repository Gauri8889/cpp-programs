#include<iostream>
#include<string.h>
using namespace std;
class student
{
    char*name;
    public:student(char *s)
    {
        name=new char[20];
        strcpy(name,s);
    }
    void display()
    {
        cout<<"name="<<name<<"\n";
    }
};
int main()
{
    student obj("amit");
    student obj2(obj);
    obj.display();//shallow copy
    obj2.display();
}
