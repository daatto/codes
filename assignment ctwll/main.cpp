#include<bits/stdc++.h>
using namespace std;
class node
{
public:
    int data;
    node *ba;
    node *fo;
};
node *first=NULL,*last=NULL;
void insrt(int a)
{
    node *ptr;
    node *temp;
    ptr=new node();
    ptr->data=a;
    ptr->fo=NULL;
    ptr->ba=NULL;
    if(first==NULL)
    {
        first=ptr;
        temp=ptr;
    }
    else
    {
        temp->fo=ptr;
        ptr->ba=temp;
        temp=ptr;
        last=ptr;
        last->fo=first;
    }
}
void traverse()
{
    cout<<"elements are:"<<endl;
    node *srt;
    for(srt=first; ;)
    {
        cout<<srt->data<<endl;
        if(srt->fo==first)return;
        else
        {
            srt=srt->fo;
        }
    }
}
void insrtfirst(int a)
{
    cout<<"after inserting at first. ";
    node *ptr;
    ptr=new node();
    ptr->data=a;
    ptr->ba=NULL;
    ptr->fo=first;
    first->ba=ptr;
    first=ptr;
    last->fo=ptr;
}
void insrtlst(int a)
{
    cout<<"after inserting at last .";
    node *ptr;
    ptr=new node();
    ptr->data=a;
    ptr->fo=NULL;
    ptr->ba=last;
    last->fo=ptr;
    last=ptr;
    last->fo=first;
}
void insrtafter(int a,int c)
{
    cout<<"after inserting after "<<a<<",";
    node *srt;
    for(srt=first; srt!=NULL ; srt=srt->fo)
    {
        if(srt->data==a)
        {
            break;
        }
    }
    if(srt==last) insrtlst(c);
    else
    {
        node *ptr,*temp;
        ptr=new node();
        ptr->data=c;
        ptr->ba=srt;
        temp=srt->fo;
        ptr->fo=temp;
        srt->fo=ptr;
        temp->ba=ptr;
    }
}
void insrtbefore(int a,int c)
{
    cout<<"after inserting before "<<a<<", ";
    node *srt ;
    for(srt=first; srt!=NULL; srt=srt->fo)
    {
        if(srt->data==a)
        {
            break;
        }
    }
    if(srt==first) insrtfirst(c);
    else
    {
        node *ptr,*temp;
        ptr=new node();
        temp=srt->ba;
        temp->fo=ptr;
        ptr->data=c;
        ptr->fo=srt;
        ptr->ba=temp;
        srt->ba=ptr;
    }
}
void deletefirst()
{
    cout<<"after deleting  first element, ";
    first=first->fo;
    first->ba=last;
    last->fo=first;
}
void deletelast()
{
    cout<<"after deleting the last element, ";
    last=last->ba;
    last->fo=first;
    first->ba=last;
}
void dlt(int a)
{
    cout<<"after deleting "<<a<<": ";
    node *srt;
    for(srt=first; srt!=NULL; srt=srt->fo)
    {
        if(srt->data==a)
        {
            break;
        }
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
void deleteafter(int a)
{
    cout<<"after deleting after "<<a<<": ";
    node *srt;
    for(srt=first; srt!=NULL; srt=srt->fo)
    {
        if(srt->data==a)
        {
            break;
        }
    }
    if(srt==last) deletelast();
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
    for(srt=first; srt!=NULL; srt=srt->fo)
    {
        if(srt->data==a)
        {
            break;
        }
    }
    if(srt==first) deletelast();
    else
    {
        node *ptr;
        srt->ba=ptr;
        dlt(ptr->info);

    }
}

int main()
{
    int n;
    cout<<"number of elements:";
    cin>>n;

    for(int i=0; i<n; i++)
    {
        int a;
        cin>>a;
        insrt(a);
    }
    traverse();
    cout<<"enter a element to insert it at first:";
    int b,a;
    cin>>b;
    cout<<endl;
    insrtfirst(b);
    traverse();
    cout<<"enter a  element to insert it at last:";
    int c;
    cin>>c;
    cout<<endl;
    insrtlst(c);
    traverse();
    cout<<"enter the element to insert another number after it:";
    cin>>a;
    cout<<endl;
    cout<<"enter the element :";
    cin>>c;
    cout<<endl;
    insrtafter(a,c);
    traverse();
    cout<<"enter a element to insert another element before it:";
    cin>>a;
    cout<<endl;
    cout<<"enter the element :";
    cin>>c;
    cout<<endl;
    insrtbefore(a,c);
    traverse();
    cout<<"press 1 for deleting first element : ";
    cin>>a;
    cout<<endl;
    if(a==1)
    {
        // cout<<"after deleting first element the elements are:"<<endl;
        deletefirst();
        traverse();
    }
    cout<<"press 1 for deleting last element :";
    cin>>a;
    cout<<endl;
    if(a==1)
    {
        // cout<<"after delelting the last element the elements are"<<endl;
        deletelast();
        traverse();
    }
    cout<<"enter the element to delete the element after it : ";
    cin>>a;
    cout<<endl;
    deleteafter(a);
    traverse();
    cout<<"enter the element to delete before it :";
    cin>>a;
    cout<<endl;
    deletebefore(a);
    traverse();
    cout<<"enter the element you want to delete :";
    cin>>a;
    cout<<endl;
    dlt(a);
    traverse();
    return 0;
}
