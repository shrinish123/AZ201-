#include<bits/stdc++.h>
using namespace std;

#define int long long

int n,k,target;
int dp[31][1001];
long long int mod = 1e9 +7;
    
    
    int rec(int lvl,int sum){
        if(lvl == n){
            if(sum == 0){
                return 1;
            }
            else {
                return 0;
            }
        }
        
        
        
        if(dp[lvl][sum] != -1){
            return dp[lvl][sum];
        }

        int ans =0;
        
        for(int i=1;i<=k;i++){
            if(sum-k >=0){
                ans = (ans + rec(lvl+1,sum-i))%mod;
            }
        }
        
        return dp[lvl][sum] = ans; 
        
    };

void solve(){

    cin>>n>>k>>target;
    memset(dp,-1,sizeof(dp));
    rec(0,target)<<endl
    
}




signed main(){
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int _t;cin>>_t;while(_t--)
    solve();
}