#include <bits/stdc++.h>

using namespace std;
class node
{
public:
    int info;
    node *fo;
    node *ba;
};
node *first1=NULL, *first2=NULL, *last1=NULL, *last2=NULL;
void insrt1(int x)
{
    node *ptr;
    ptr=new node();
    ptr-> info=x;
    ptr->fo=NULL;
    ptr->ba=NULL;
    if(first1==NULL)
    {
        first1=ptr;
        last1=ptr;
    }
    else
    {
        last1->fo=ptr;
        ptr->ba=last1;
        last1=ptr;
    }
}
void insrt2(int x)
{
    node *ptr;
    ptr=new node();
    ptr-> info=x;
    ptr->fo=NULL;
    ptr->ba=NULL;
    if(first2==NULL)
    {
        first2=ptr;
        last2=ptr;
    }
    else
    {
        last2->fo=ptr;
        ptr->ba=last2;
        last2=ptr;
    }
}
void inla(int y)
{
    node *ptr;
    ptr=new node();
    ptr->info=y;
    ptr->fo=NULL;
    ptr->ba=last2;
    //node *srt;
    last2->fo=ptr;
    last2=ptr;


}
void infa(int y)
{
    node *ptr;
    ptr=new node();
    ptr->info=y;
    ptr->fo=first2;
    ptr->ba=NULL;
    //node *srt;
    first2->ba=ptr;
    first2=ptr;
}
void inbe(int x,int y)
{
    if(x==first2->info)
    {
        infa(y);
    }
    else {
    node *ptr;
    ptr=new node();
    ptr->info=y;
    ptr->fo=NULL;
    ptr->ba=NULL;
    node *srt;
    for(srt=last2;srt!=first2 ;)
    {
        if(srt->info==x)
        {
            node *q;
            q=srt->ba;
            q->fo=ptr;
            ptr->ba=q;
            ptr->fo=srt;
            srt->ba=ptr;
            break;
        }
        srt=srt->ba;
    }
    }
}
void traverse1()
{
    node *srt;
    for(srt=first1; ;)
    {
        cout<<srt->info<<" ";
        srt=srt->fo;
        if(srt==last1)
        {
            cout<<srt->info<<endl;
            break;
        }
    }
}
void traverse2()
{
    node *srt;
    for(srt=first2; ;)
    {
        cout<<srt->info<<" ";
        srt=srt->fo;
        if(srt==last2)
        {
            cout<<srt->info<<endl;
            break;
        }
    }
}
int main()
{
    int n;
    cin>>n;
    for(int i=0; i<n; i++)
    {
        int x;
        cin>>x;
        insrt1(x);
    }
    node *srt,*trt;
    insrt2(first1->info);

    for(srt=first1->fo;srt!=NULL ;)
    {
        node *trt;
        for(trt=first2; ; )
        {
            if(srt->info <= trt->info ) {inbe(trt->info,srt->info);
            break;}
            trt=trt->fo;
            if(trt=last2)
            {
                inla(srt->info);
                break;
            }
        }
        srt=srt->fo;

    }
    traverse1();
    traverse2();

    return 0;
}
