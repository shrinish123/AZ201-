#include<bits/stdc++.h>
using namespace std;

#define int long long

int n;
int arr[100100];
int t[400400];

void build(int id,int l,int r){
    if(l == r){
        t[id] = arr[l];
    }

    int mid = (l+r)/2;
    build(id*2,l,mid);
    build(id*2 +1,mid +1,r);
    t[id] = t[id*2] + t[id*2 +1];
}

void update(int id,int l,int r ,int pos,int val){
    if(pos < l || pos > r){
        return ;
    }
    if(l==r){
        t[id] = val;
        arr[l] = pos;
    }

    int mid = (l+r)/2;

    update(2*id, l,mid,pos,val);
    update(2*id +1,mid +1,r,pos,val);
    t[id] = t[id*2] + t[id*2 +1];
}


int query(int id ,int l,int r ,int lq,int rq){
    if(lq> r || rq< l ){
        return 0;
    }

    if(lq <= l && rq >= r){
        return t[id];
    }


    int mid = (l+r)/2;

    return query(id*2, l ,mid,lq,rq) + query(id*2 +1, mid +1,r,lq,rq);
   
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
            update(1,0,n-1,x,v);
        }
        else{
            int l,r;
            cin>>l,r;
            cout<<query(1,0,n-1,l,r)<<endl;
        }
    }
}




signed main(){
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int _t;cin>>_t;while(_t--)
    solve();
}