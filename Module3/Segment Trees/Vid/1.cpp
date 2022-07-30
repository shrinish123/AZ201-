#include<bits/stdc++.h>
using namespace std;

#define int long long
#define F first
#define S second

void solve(){
    int n,l;
    cin>>n>>l;
    vector<pair<int,int>> test;
    for(int i=0;i<l;i++){
      int a,b;
      cin>>a>>b;
      test.push_back({a,b});
    }
    test.push_back({n,0});

    sort(test.begin(),test.end());

    int d =0;
    int x =0;int y=0;

    for(int i=0;i<test.size();i++){
        
        if(i==0) {

            x += test[0].F;
            if(test[0].S  == 0) d = 3;
            else d = 1;

        }else {


             int time = test[i].F - test[i-1].F;

            
              if(d==0){
                 x += time;
                  if(test[0].S  == 0) d = 3;
                  else d = 1;
                
              }else if(d ==1){
                  y -= time;
                   if(test[0].S  == 0) d = 0;
                  else d = 2;

              }else if(d ==2){
                  x -= time;
                   if(test[0].S  == 0) d = 1;
                  else d = 3;

              }else {
                  y+= time;
                   if(test[0].S  == 0) d = 2;
                  else d = 0;
              }
        }
    }


   
    cout<<x+y<<endl;
}




signed main(){
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    // int _t;cin>>_t;while(_t--)
    solve();
}