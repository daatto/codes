#include <bits/stdc++.h>

using namespace std;
class a;
class b;
class c;
class d;
class d
{
    public:
    int ar[10]={1,2,3,4};
    friend d operator *(int x,d &t)
    {
        for(int i=0;i<4;i++)
        {
            t.ar[i]=t.ar[i]*x;
        }
        return t;
    }
    b operator > (c& cc);

};
class c
{
    public:
    int ar2[10]={23,3423,532,5};
    d ad[10];
    d& operator [](int x)
    {
        return ad[x+1];
    }
};
class b
{
    public:
    int ar3[10]={565,545,5456451,55};
    c ac[10];
    c& operator [](int x)
    {
        return ac[x];
    }
};
b d:: operator >(c& cc)
{
    b t;
    for(int i=0;i<4;i++)
    {
        if(ar[i]>=cc.ar2[i])
        {
            cout<<1<<endl;
            t.ar3[i]=1;
        }
        else
        {
            cout<<0<<endl;
            t.ar3[i]=0;
        }
    }

}
class a
{
    public:
    int ar4[10]={1,2,5,9};
    b ab[10];
    b& operator [](int x)
    {
        return ab[x+1];
    }
};

int main()
{

    a aa;

    aa[2]=4*aa[2][3][4]>aa[3][4];

    return 0;
}
