#include<bits/stdc++.h>
using namespace std;

#define int long long

int arr[1010][1010];

bool check(int i,int j){

    if( arr[i][j] == 2 && arr[j][i] != 0) return false;

    else if( arr[i][j] == 0 && arr[j][i] != 2) return false;

    else if(  arr[i][j] == 1 && arr[j][i] != 1 ) return false;

    else return true;
}

void solve(){
    
    int n;
    cin>>n;
    bool ans =true;

    for(int i=0;i<n;i++){
        string s ;
        cin>>s;
        for(int j=0;j<n;j++){
            if(s[j] == 'W'){
                arr[i][j] = 2;
            }
            else if(s[j] == 'L'){
                arr[i][j] = 0;
            }
            else if(s[j] == 'D'){
                arr[i][j] = 1;
            }
            else {
                arr[i][i] =0;
            }
        }
    }

    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){

            if(i != j){
                  
               if(!check(i,j)) {
                   ans = false;
                   break;
               }
            }
        }
    }

    if(ans) cout<<"correct"<<endl;
    else cout<<"incorrect"<<endl;
}




signed main(){
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    // int _t;cin>>_t;while(_t--)
    solve();
}