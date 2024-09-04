#include<iostream>
using namespace std;
class weight
{
    int kg,grm;
    public:weight(int k=0,int g=0)
    {
        kg=k;
        grm=g;
    }
    weight operator + (weight &w)
    {
        weight tmp;
        tmp.kg=kg+w.kg;
        tmp.grm=grm+w.grm;
        return tmp;
    }
    show()
    {
        cout<<"kilogram="<<kg<<" & "<<"gram="<<grm<<"\n";
    }
};
int main()
{
    weight w1(200,30);
    weight w2(190,32);
    weight w3=w1+w2;
    w3.show();
}
