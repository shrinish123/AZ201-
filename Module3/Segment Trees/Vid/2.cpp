#include<bits/stdc++.h>
using namespace std;

#define int long long

int n;
int arr[100100];
vector<pair<int,int>> t(400400,0);

struct node{
    int mini;
    int cnt;
    node(int m = 1e9,c =0){
        mini = m,
        cnt =c;
    }
    
}

void build(int id ,int l,int r){
   
}

void solve(){
    cin>>n;
    for(int i=0;i<n;i++){
       cin>>arr[i];
    }

    build(1,0,n-1);

    int q;
    cin>>q;
    for(int i=0;i<q;i++){
        int ch;
        cin>>ch;
        if(ch ==1){
            int x,v;
            cin>>x>>v;
            update(1, 0, n-1,x,v);
        }else{
            int l,r;
            cout<<query(1, 0, n-1,l,r).F <<" "<<query(1, 0, n-1,l,r).S<<endl;
        }
    }
}




signed main(){
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int _t;cin>>_t;while(_t--)
    solve();
}