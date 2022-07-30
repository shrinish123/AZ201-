#include<bits/stdc++.h>
using namespace std;

#define int long long
#define F first
#define S second

int dist(int x1,int y1,int x2,int y2){
    return (y2-y1)*(y2-y1) + (x2-x1)*(x2-x1);
}

void solve(){
    int s,x;
    cin>>s>>x;
    vector<pair<int,int>> loc;
    
    for(int i=0;i<x;i++){
        int a,b;
        cin>>a>>b;
        loc.push_back({a,b});
    }

     double ans =0;

    for(int i=0;i<x;i++){
        for(int j=i+1;j<x;j++){
          
            ans = max(ans, sqrt(dist(loc[i].F,loc[i].S, loc[j].F,loc[j].S)));
        }
    } 
    ans = ans/s;
    

    cout<<setprecision(6)<<fixed<<ans<<endl;

}




signed main(){
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    // int _t;cin>>_t;while(_t--)
    solve();
}