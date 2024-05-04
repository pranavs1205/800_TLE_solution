#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long

void solve()
{
    int n,x;
    cin>>n>>x;
    int a[n];
    int diff[n+1];
    diff[0]=0;
    for(int i=0;i<n;i++){
        cin>>a[i];
        if(i!=0 ){
            diff[i]=a[i]-a[i-1];
        }else
        diff[i]=a[i];
    }
    diff[n]=2*(x-a[n-1]);
    sort(diff,diff+n+1);
    int max= diff[n];
    cout<<max<<"\n";


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
