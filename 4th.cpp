#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long

void solve()
{
int x;
cin>>x;
if(x%3==0)
{
    cout<<"Second"<<endl;
}
else
{
    cout<<"First"<<endl;
}

}

signed main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int _t;cin>>_t;while(_t--)
    solve();

    return 0;
}
