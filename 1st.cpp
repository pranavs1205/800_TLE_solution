#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long

void solve()
{
    int c,d;
    cin>>c>>d;
    int x[c];
    for(int i=0;i<c;i++){
        cin>>x[i];
    }
    if(d>1)
    cout<<"YES"<<endl;
    else{
        int arr2[c];
        copy(x, x + c, arr2);
        sort(x,x+c);
        int h=0;
        for (int i = 0; i < c; i++)
            if (x[i] != arr2[i]){
                cout<<"NO\n";h++;break;}
        if(h==0){
            cout<<"YES\n";
        }
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
