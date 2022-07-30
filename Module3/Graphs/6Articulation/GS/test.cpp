#include<bits/stdc++.h>
using namespace std;

#define int long long


bool coprime(int a,int b){
    return __gcd(a,b) == 1;
}

void solve(){
    
    int ans =0;
    for(int i=1;i<1008;i++){
        if(coprime(i,1008))ans++;
    }
    cout<<ans<<endl;

}




signed main(){
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    // int _t;cin>>_t;while(_t--)
    solve();
}