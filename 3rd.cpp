#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long

void solve()
{
int x;
cin>>x;
char d;
int c=0;
vector<int>arr;
int ans=0;
for (int i=0;i<x;i++){
    cin>>d;
    arr.push_back(d);
}
bool flag=true;
for (int i = 0; i < x; i++)
{
    if(i<x-2)
    if(arr[i]==arr[i+1] && arr[i+2]==arr[i+1] && arr[i]=='.'){
        cout<<2<<"\n";
        flag=false;
        break;
    }
    if(arr[i]=='.'){
        c++;
    }
}

if(flag)
cout<<c<<'\n';

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
