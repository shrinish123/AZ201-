#include<bits/stdc++.h>
using namespace std;

#define int long long

int l,m;
int dp[1010][1010];

int rec(int lvl,int val){
    if(lvl == l){
       return 1%m;
    }

    if(dp[lvl][val] != -1){
        return dp[lvl][val];
    }

    int temp = (val *val +1 )%m;

    int ans =1;

    for(int i=0;i<temp;i++){
       ans = (ans + rec(lvl+1,i))%m;
    }
    return dp[lvl][val] =ans;

}

void solve(){
    cin>>l>>m;
    memset(dp,-1,sizeof(dp));
    cout<<rec(1,2)<<endl;
}




signed main(){
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    // int _t;cin>>_t;while(_t--)
    solve();
}