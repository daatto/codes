#include<bits/stdc++.h>
using namespace std;

char ara[1000];
int s=0;

bool isempty()
{
    return !(bool)s;
}
char top(){
    return ara[s-1];
}

void pop(){
    s--;
}

void push(char data){
    ara[s]=data;
    s++;
}

int isoperand(char x)
{
    if((x>='A' && x<='Z') ||( x>='a' && x<='z') )return 1;
    else return 0;
}

int isoperator(char x)
{
    if(x=='+'||x=='-'||x=='*'|| x=='/'||x=='^')return 1;
    else
    return 0;
}

bool hashigher(char f,char s)
{
    if(f=='^') return true;
    if(s=='^') return false;
    if((f=='*' || f=='/')) return true;
    if((f=='+' || f=='-') && (s=='*' || s=='/') ) return false;
    return true;
}
int main()
{
    string s;
    getline(cin,s);
    push('(');
    string result;
    s+=')';
    for(int i=0;i<s.size();i++)
    {
        if(isoperator(s[i])==)
    }
}
