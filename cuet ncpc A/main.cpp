#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin>>t;
    for(int i=1;i<=t;i++)
    {
        string s;
        int n;
        cin>>s>>n;
        cout<<"Case "<<i<<": ";
        if(s=="January") cout<<"Pohela Falgun"<<endl;
        else if(s=="February" && n<13)  cout<<"Pohela Falgun"<<endl;
        else if(s=="February" && n==13)  cout<<"Valentine's Day"<<endl;
        else if(s=="February" && n==14)  cout<<"International Mother Language Day"<<endl;
        else if(s=="February" && n<21)  cout<<"International Mother Language Day"<<endl;
        else if(s=="February" && n>=21)  cout<<"International Women's Day"<<endl;
        else if(s=="March" && n<8)  cout<<"International Women's Day"<<endl;
        else if(s=="March" && n<21)  cout<<"International Color Day"<<endl;
        else if(s=="March" && n<26)  cout<<"Bangladesh Independence Day"<<endl;
        else if(s=="March" && n>=26)  cout<<"April Fools Day"<<endl;
        else if(s=="April" && n<14)  cout<<"Pohela Boishakh"<<endl;
        else if(s=="April" && n>=14)  cout<<"May Day"<<endl;
        else if(s=="May" && n>=1)  cout<<"Father's Day"<<endl;
        else if(s=="June" && n<19)  cout<<"Father's Day"<<endl;
        else if(s=="June" && n>=19)  cout<<"Mandela Day"<<endl;
        else if(s=="July" && n<18)  cout<<"Mandela Day"<<endl;
        else if(s=="July" && n>=18)  cout<<"World Mosquito Day"<<endl;
        else if(s=="August" && n<20)  cout<<"World Mosquito Day"<<endl;
        else if(s=="August" && n>=20)  cout<<"Halloween"<<endl;
        else if(s=="September")  cout<<"Halloween"<<endl;
        else if(s=="October" && n<31)  cout<<"Halloween"<<endl;
        else if(s=="October" && n==31)  cout<<"World Toilet Day"<<endl;
        else if(s=="November" && n<19)  cout<<"World Toilet Day"<<endl;
        else if(s=="November" && n>=19)  cout<<"Human Rights Day"<<endl;
        else if(s=="December" && n<10)  cout<<"Human Rights Day"<<endl;
        else if(s=="December" && n<16)  cout<<"Victory Day of Bangladesh"<<endl;
        else if(s=="December" && n<25)  cout<<"Christmas Day"<<endl;
        else if(s=="December" && n>=25)  cout<<"Pohela Falgun"<<endl;

    }
    return 0;
}
