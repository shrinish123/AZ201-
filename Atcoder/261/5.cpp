#include<bits/stdc++.h>
using namespace std;

#define int long long
#define F first
#define S second

void solve(){
    int n,c;
    cin>>n>>c;
    vector<pair<int,int>> mp(n);

    for(int i=0;i<n;i++){
      int t,a;
      cin>>t>>a;
      mp[i] = {t,a};
    }

    int ans[n];

    for(int i=0;i<n;i++){

       
        if(mp[i].F == 1){
            c = c & mp[i].S;

        }else if(mp[i].F == 2){
            c = c | mp[i].S;
        }
        else {
             c = c ^ mp[i].S;
        }
        ans[i] = c;
       
    }

    for(int i=0;i<n;i++){
        cout<<ans[i]<<endl;
    }
}




signed main(){
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    // int _t;cin>>_t;while(_t--)
    solve();
}