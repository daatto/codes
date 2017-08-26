#include<cstdio>
#include<queue>
#include<functional>
int main()
{
    while(true)
    {
        int a,b,c;
        scanf("%d%d%d",&a,&b,&c);
        if(a==0 && b==0 && c==0)
            break;
        std::priority_queue<int,std::vector<int>,std::greater<int> > aa;
        std::priority_queue<int> bb;
        double x=0.0;
        for(int i=0; i<c; i++)
        {
            int g;
            scanf("%d",&g);
            x+=g;
            aa.push(g);
            if(i>=a)
                aa.pop();
            bb.push(g);
            if(i>=b)
                bb.pop();
        }
        while(!aa.empty())
        {
            x-=aa.top();
            aa.pop();
        }
        while(!bb.empty())
        {
            x-=bb.top();
            bb.pop();
        }
        x/=c-a-b;
        printf("%.6f\n",x);
    }
    return 0;
}
