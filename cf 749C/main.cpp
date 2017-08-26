#include <bits/stdc++.h>

using namespace std;


   int main()
{
    string s;
    int n;
    cin >> n >> s;
    if(s.size() == 1){
        cout << s[0];
        return 0;
    }
    int x, y;
    int x1, y1;

    x1 = y1 = x = y = 0;

    while(1){
        string s1;
        x = y = 0;
        for(int i=0;i<s.size();i++){
            if(x1 > 0 && s[i] == 'D'){
                x1--;
                continue;
            }
            if(y1 > 0 && s[i] == 'R'){
                y1--;
                continue;
            }
            if(s[i] == 'D'){
                s1.push_back(s[i]);
                x++;
                y1++;
            }
            else {
                s1.push_back(s[i]);
                y++;
                x1++;
            }
        }
        if(x == 0 || y == 0) break;
        s = s1;
    }
    if(x>0) cout << 'D'<<endl;
    else cout << 'R'<<endl;
    return 0;
}
