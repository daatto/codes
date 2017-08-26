#include <stdio.h>
#include <conio.h>
#include <bits/stdc++.h>
using namespace std;


struct student{
    int roll;
    int v[100];
    int merit;
    };
 struct student st[4000];
bool f(const student& x, const student& y) { return x.merit < y.merit; }


int main()
{
    int n;
    cout<<"insert student numbers:"<<endl;
    cin>>n;
    cout<<"subject choice should be given in numbers as it appears:"<<endl;
    cout<<"eee-1,cse-2,me-3,ce-4,ece-5,bme-6,iem-7,le-8,te-9,becm-10,mse-11,ese-12,urp-13,archi-14"<<endl;
    for(int i=0;i<n;i++)
    {

        cout<<"enter student "<<i+1<<" roll number"<<endl;
        cin>>st[i].roll;
        cout<<"insert subject choice serially in serial number:"<<endl;
       for(int j=0;j<14;j++){
       cin>>st[i].v[j];
       }
        cout<<"insert merit position:"<<endl;;
        cin>>st[i].merit;
    }
    int eee,cse,me,ce,ece,bme,iem,le,te,becm,mse,ese,urp,archi;
    eee=cse=me=ce=ece=bme=iem=le=te=becm=mse=ese=urp=archi=0;
     std::sort(st,st+n,f);

    for(int i=0;i<n;i++)
    {
        int c=0;
        for(int j=0;j<14,c==0;j++){
        if((st[i].v[j]==1) && eee<=120) {
        cout<<st[i].roll<<" -eee"<<endl;
        eee++;c=1;}
        else if( (st[i].v[j]==2) && cse<=120) {
        cout<<st[i].roll<<" -cse"<<endl;
        cse++;c=1;}
        else if(st[i].v[j]==3 &&  me<=120) {
        cout<<st[i].roll<<" -me"<<endl;
        me++;c=1;}
        else if(st[i].v[j]==4 &&  ce<=120) {
        cout<<st[i].roll<<" -ce"<<endl;
        ce++;c=1;}
        else if(st[i].v[j]==5 && ece<=60) {
        cout<<st[i].roll<<" -ece"<<endl;
        ece++;c=1;}
        else if(st[i].v[j]==8 && le<=60) {
        cout<<st[i].roll<<" -le"<<endl;
        le++;c=1;}
        else if(st[i].v[j]==9 && te<=60) {
        cout<<st[i].roll<<" -te"<<endl;
        te++;c=1;}
        else if(st[i].v[j]==6 &&  bme<=30) {
        cout<<st[i].roll<<" -bme"<<endl;
        bme++;c=1;}
        else if(st[i].v[j]==7 &&  iem<=60) {
        cout<<st[i].roll<<" -iem"<<endl;
        iem++;c=1;}
        else if(st[i].v[j]==10 &&  becm<=60) {
        cout<<st[i].roll<<" -becm"<<endl;
        becm++;c=1;}
        else if(st[i].v[j]==11 &&  mse<=60) {
        cout<<st[i].roll<<" -mse"<<endl;
        mse++;c=1;}
        else if(st[i].v[j]==12 &&  ese<=60) {
        cout<<st[i].roll<<" -ese"<<endl;
        ese++;c=1;}
        else if(st[i].v[j]==13 && urp<=60) {
        cout<<st[i].roll<<" -urp"<<endl;
        urp++;c=1;}
        else if(st[i].v[j]==14 &&  archi<=60) {
        cout<<st[i].roll<<" -archi"<<endl;
        archi++;c=1;}
        }
        if(c==0) cout<<"please wait for migration"<<endl;
    }


    return 0;
}
