#include<iostream>
using namespace std;
class unv
{
    public:virtual void exam()=0;
};
class lnct:public unv
{
    public:void show()
    {
        cout<<"lnct\n";
    }
    void exam()
    {
        cout<<"lnct exam cell\n";
    }
};
class oist:public unv
{
    public:void show()
{
void exam()
{
    cout<<"oist exam cell\n";
}
};
int main()
{
    unv *v;
    lnct k;
    oist ob;
    v=&k;
    v->exam();
    v->&ob;
    v->exam();
};
