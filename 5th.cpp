#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long

void solve()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    cin >> a[i];
    int dp[n];
    copy(a,a+n,dp);
    sort(dp,dp+n);
    
    if(dp[0]!=a[0] )
    {cout<<"No\n";return;}
    else
    cout<<"Yes\n";

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
