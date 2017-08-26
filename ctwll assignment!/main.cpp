#include <bits/stdc++.h>

using namespace std;
class node{
    public:
int info;
node *fo;
node *ba;
};
node *first=NULL;
node *last=NULL;
void insrt(int x)
{
    node *ptr;
    ptr=new node();
    ptr->info=x;
    ptr->fo=first;
    ptr->ba=last;
    if(first==NULL)
    {
        ptr->fo=ptr;
        ptr->ba=ptr;
        first=ptr;
        last=ptr;
    }
    else
    {
        last->fo=ptr;
        last=ptr;
    }
}
void traverse()
{
    node *srt;
    for(srt=first; ;)
    {
        cout<<srt->info<<endl;
        srt=srt->fo;
        if(srt==first) return;
    }
}
void traverse2()
{
    node *srt;
    for(srt=last; ;)
    {
        cout<<srt->info<<endl;
        srt=srt->ba;
        if(srt==last) return;
    }
}
void insrtfirst(int a)
{

    node *ptr;
    ptr=new node();
    ptr->info=a;
    ptr->ba=last;
    ptr->fo=first;
    first->ba=ptr;
    last->fo=ptr;
    first=ptr;
}
void insrtlst(int a)
{

    node *ptr;
    ptr=new node();
    ptr->info=a;
    ptr->fo=first;
    ptr->ba=last;
    last->fo=ptr;
    first->ba=ptr;
    last=ptr;
    first->ba=last;
}
void insrtbfr(int x)
{
    cout<<"enter the number"<<endl;
    int a;
    cin>>a;
    node *srt;
    for(srt=first;;)
    {
        if(srt->info==x) break;
        srt=srt->fo;
    }
    if(srt==first) {insrtfirst(a);
     cout<<"inserted"<<a<<"before"<<x<<endl;
    traverse();
    return;}
    else
    {
        node *p,*q,*ptr;
        ptr=new node();
        p=srt->ba;
    ptr->info=a;
    ptr->fo=srt;
    srt->ba=ptr;
    p->fo=ptr;
    ptr->ba=p;
 cout<<"inserted"<<a<<"before"<<x<<endl;
    traverse();

    }

}
void insrtafter(int x)
{
    cout<<"enter the number"<<endl;
    int a;
    cin>>a;
    node *srt;
    for(srt=first; ; )
    {
        if(srt->info==x)
        {
            break;
        }
        srt=srt->fo;
    }
    if(srt==last) {insrtlst(a);
    cout<<"inserted"<<a<<"after"<<x<<endl;
    traverse();
    return;}
    else
    {
        node *ptr,*temp;
        ptr=new node();
        ptr->info=a;
        ptr->ba=srt;
        temp=srt->fo;
        ptr->fo=temp;
        srt->fo=ptr;
        temp->ba=ptr;
        cout<<"inserted"<<a<<"after"<<x<<endl;
    traverse();
    }

}
void deletefirst()
{

    first=first->fo;
    first->ba=last;
    last->fo=first;
}
void deletelast()
{
    last=last->ba;
    last->fo=first;
    first->ba=last;
}
void deleteafter(int a)
{
    cout<<"after deleting after "<<a<<": ";
    node *srt;
    for(srt=first; ; )
    {
        if(srt->info==a)
        {
            break;
        }
        srt=srt->fo;
    }
    if(srt==last) deletefirst();
    else
    {
        node *ptr,*temp;
        temp=srt->fo;
        ptr=temp->fo;
        ptr->ba=srt;
        srt->fo=ptr;
    }
}
void deletebefore(int a)
{
    cout<<"after deleting before "<<a<<": ";
    node *srt;
    for(srt=first;; )
    {
        if(srt->info==a)
        {
            break;
        }
        srt=srt->fo;
    }
    if(srt==first) deletelast();
    else
    {
        node *ptr,*temp;
        temp=srt->ba;
        ptr=temp->ba;
        ptr->fo=srt;
        srt->ba=ptr;
    }
}
void deletethis(int a)
{
    cout<<"after deleting "<<a<<": ";
    node *srt;
    for(srt=first; ; )
    {
        if(srt->info==a)
        {
            break;
        }
        srt=srt->fo;
    }
    if(srt==last) deletelast();
    else if(srt==first) deletefirst();
    else
    {
        node *temp,*ptr;
        temp=srt->ba;
        ptr=srt->fo;
        temp->fo=ptr;
        ptr->ba=temp;
    }
}
int main()
{
    int n;
    cout<<"enter number of elements"<<endl;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        int x;
        cin>>x;
        insrt(x);
    }
    first->ba=last;
    cout<<"the given list"<<endl;
    traverse();
    cout<<"the given list reversely"<<endl;
    traverse2();
    cout<<"for inserting 1st enter a number"<<endl;
    int a;
    cin>>a;
    cout<<"after inserting"<<a<<" at first. "<<endl;
    insrtfirst(a);
    traverse();
    cout<<"for inserting last enter a number"<<endl;
    int b;
    cin>>b;
    cout<<"after inserting"<<b<<" at last. "<<endl<<endl;
    insrtlst(b);
    traverse();
    cout<<"for inserting before a element enter a number"<<endl;
    int c;
    cin>>c;
    insrtbfr(c);
    cout<<"for inserting after a element enter a number"<<endl;
    int d;
    cin>>d;
    insrtafter(d);
    cout<<"press 1 to delete 1st"<<endl;
    int e; cin>>e; if(e==1) {
    deletefirst();
    cout<<"after deleting  first element, "<<endl;
    traverse();
    }
    cout<<"press 1 to delete last"<<endl;
    int f; cin>>f; if(f==1) {
    deletelast();
    cout<<"after deleting  last element, "<<endl;
    traverse();
    }
    cout<<"enter a number to delete after that element"<<endl;
    int g;
    cin>>g;
    deleteafter(g);
    cout<<"after deleting element"<<endl;
    traverse();
    int h;
    cout<<"enter a number to delete before that element"<<endl;
    cin>>h;
    deletebefore(h);
    cout<<"after deleting element"<<endl;
    traverse();
    cout<<"enter a number to delete the element"<<endl;
    int i;
    cin>>i;
    deletethis(i);
    cout<<"after deleting element"<<endl;
    traverse();


    return 0;
}
