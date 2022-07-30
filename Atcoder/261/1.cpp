#include<bits/stdc++.h>
using namespace std;

#define int long long

void solve(){
    int l1,r1,l2,r2;
    cin>>l1>>r1>>l2>>r2;
    int ans =0;

    if(l1 <= l2){
        if(r1 >= l2 && r1 <= r2){

          ans = r1-l2;
        }else if(r1 >= l2 && r1 > r2){
            ans = r2-l2;
        }
    }else {
        if(r2 >= l1 && r2 <= r1){
            ans = r2-l1;
        }else if(r2 >= l1 && r2 > r1){
            ans = r1 -l1;
        }
    }
    cout<<ans<<endl;
}




signed main(){
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    // int _t;cin>>_t;while(_t--)
    solve();
}