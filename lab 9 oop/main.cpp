#include <bits/stdc++.h>

using namespace std;
ofstream my("example.txt");
class base
{
public:
    string dname;
    virtual write(void)
    {
    }
    base(string x)
    {
        dname=x;
    }
};
class dept:public base{
    public:
string name;
int mark[3];
 write()
{
    my.open("example.txt",ios::app);
    my<<"dept: "<<dname<<endl;
    my<<"name: "<<name<<endl;
    my<<"marks: "<<mark[0]<<" "<<mark[1]<<" "<<mark[2]<<endl;
}
dept(string a,string b,int x,int y,int z):base(a)
{
    name=b;
    mark[0]=x;
    mark[1]=y;
    mark[2]=z;
}
};
class Roll:public base{
public:
    string name;
    int roll;
    write()
    {
    my.open("example.txt",ios::app);
    my<<"dept: "<<dname<<endl;
    my<<"name: "<<name<<endl;
    my<<"Roll: "<<roll<<endl;
    }

    Roll(string a,string b,int x):base(a)
{
    name=b;
    roll=x;
}

    };
int main()
{
    //cout << "Hello world!" << endl;
    dept o1("CSE","daud",100,200,300);
    dept o2("EEE","shohan",511,63,96);
    Roll o3("CSE","daud",1507077);
    base *p;
    p=&o1;
    p->write();
    p=&o2;
    p->write();
    p=&o3;
    p->write();
    return 0;
}
