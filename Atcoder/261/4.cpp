#include<bits/stdc++.h>
using namespace std;

#define int long long
int n,m;
int dp[5001][5001];
int arr[5010];
map<int,int> mp;


int rec(int level,int counter){
    if(level == n){
        return 0;
    }

    if(dp[level][counter] != -1){
        return dp[level][counter];
    }

    int ans =0;

    ans = max( ans , arr[level] + mp[counter+1] + rec(level+1,counter+1));

    ans = max(ans,rec(level+1,0));

    return dp[level][counter] = ans;
}

void solve(){
    
    cin>>n>>m;

    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

  
    for(int i=0;i<m;i++){
        int c,y;
        cin>>c>>y;
        mp[c] = y;
    }

    memset(dp,-1,sizeof(dp));

    cout<<rec(0,0)<<endl;
}






signed main(){
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    // int _t;cin>>_t;while(_t--)
    solve();
}