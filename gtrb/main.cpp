#include <bits/stdc++.h>
using namespace std;
int main()
{
    map<string, vector<map<pair<string, int>, vector<int> > > >department;
    int d ;
    cin>>d;
    vector<map<pair<string, int>, vector<int> > > st;
    for(int i=0;i<d;i++)
    {
        string dept;
        cin>>dept;
        map<pair<string, int>, vector<int> > ma;
        int n;
        cin>>n;
        for(int j=0;j<n;j++)
        {
            string name;
            cin>>name;
            int roll;
            cin>>roll;
            pair<string, int>pa(make_pair(name,roll));
            int sub;
            cin>>sub;
            vector<int>v;
            for(int k=0;k<sub;k++)
            {
                int m;
                cin>>m;
                v.push_back(m);
            }
            ma[pa]=v;

        }
        st.push_back(ma);
        department[dept]=st;

    }
     for(auto dept_it=department.begin(); dept_it!=department.end(); dept_it++)
    {

        cout<<"Department: "<<(*dept_it).first<<endl;
        auto student=(*dept_it).second;
        for(auto std_it= student.begin(); std_it!= student.end(); std_it++)
        {
            auto student_info= *std_it;

            for(auto st_it= student_info.begin(); st_it!=student_info.end(); st_it++)
            {

                cout<<"Student name: "<<(*st_it).first.first<<endl;
                cout<<"Roll: "<<(*st_it).first.second<<endl;

                auto subject= (*st_it).second;
                cout<<"Marks: ";
                for(auto sub_it= subject.begin(); sub_it!=subject.end(); sub_it++)
                {
                    cout<<*sub_it<<" ";
                }
                cout<<endl;
            }
        }
        cout<<endl;


}
}
/*
#include<bits/stdc++.h>
#define pi                  acos(-1)
#define READ                freopen("in.txt", "r", stdin)
#define WRITE               freopen("out.txt", "w", stdout)
#define INF                 1000000000000000001
#define dist(ax,ay,bx,by)   sqrt((ax-bx)*(ax-bx)+(ay-by)*(ay-by))
#define mod                  100000007
#define gcd(a,b)            __gcd(a,b)
#define lcm(a,b)            (a*b)/__gcd(a,b)
#define m_p(a,b)            make_pair(a,b)
#define pb                  push_back

using namespace std;
typedef unsigned long long llu;
typedef long long lli;


int main()
{

    map<string, vector<map<pair<string, int>, vector<int> > > >department;

    int dept_no;
    cin>>dept_no;

    vector<map<pair<string, int>, vector<int> > >st_v;

    for(int dn=0; dn<dept_no; dn++)
    {
        string dept;
        cin>>dept;

        map<pair<string, int>, vector<int> >stdnt;

        lli std_no;
        cin>>std_no;

        for(int sn=0; sn<std_no; sn++)
        {
            string name;
            cin>>name;
            int roll;
            cin>>roll;

            pair<string, int>st_info(make_pair(name, roll));

            int sub_no;
            cin>>sub_no;

            vector<int>mrks;

            for(int sb=0; sb<sub_no; sb++)
            {
                int mark;
                cin>>mark;
                mrks.push_back(mark);
            }

            stdnt[st_info]=mrks;

        }

        st_v.push_back(stdnt);

        department[dept]=st_v;
        st_v.clear();
    }

///map<string, vector<map<pair<string, int>, vector<int> > > >department;

    for(auto dept_it=department.begin(); dept_it!=department.end(); dept_it++)
    {

        cout<<"Department: "<<(*dept_it).first<<endl;
        auto student=(*dept_it).second;
        for(auto std_it= student.begin(); std_it!= student.end(); std_it++)
        {
            auto student_info= *std_it;

            for(auto st_it= student_info.begin(); st_it!=student_info.end(); st_it++)
            {

                cout<<"Student name: "<<(*st_it).first.first<<endl;
                cout<<"Roll: "<<(*st_it).first.second<<endl;

                auto subject= (*st_it).second;
                cout<<"Marks: ";
                for(auto sub_it= subject.begin(); sub_it!=subject.end(); sub_it++)
                {
                    cout<<*sub_it<<" ";
                }
                cout<<endl;
            }
        }
        cout<<endl;
    }

    return 0;
}

*/
