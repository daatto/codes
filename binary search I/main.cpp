#include<bits/stdc++.h>

using namespace std;

int n, m, c[10000];

bool f(int x) {
    int a(0),b(0);
    for(int i=0;i<n;i++){
        if(c[i]>x) return 0;
        if(b+c[i]>x)b=0;
        if(b==0) a++;
         b+=c[i];
        if(a>m) return 0;
    }
    return 1;
}

int main() {

    int t;
    cin>>t;
    if(t>100) return 0;
    else

    for(int i=1;i<=t;i++) {
        cin>>n>>m;
        for(int i=0;i<n;i++){
            cin>>c[i];}

        int h=1000000000,l=0;
        while(l<h) {
            if(f(h)) {
                h=(h+l)/2;
            } else {
                l=h;
                h=h+h/2;
            }
        }
        cout<<"Case "<<i<<": "<<h+1<<endl;
    }
    return 0;
}
