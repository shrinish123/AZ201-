#include<bits/stdc++.h>
using namespace std;

#define int long long

void solve(){
    int n;
    cin>>n;
    vector<string> arr;
    map<string,int> mp;

    for(int i=0;i<n;i++){
        string s;
        cin>>s;
        arr.push_back(s);
    }


    for(int i=0;i<n;i++){
        mp[arr[i]]++;

        if(mp[arr[i]] == 1){
            cout<<arr[i]<<endl;
        }else {
            int cnt = mp[arr[i]]-1;
            string s = arr[i] + "(" + to_string(cnt)  + ")";
            cout<<s<<endl;
        }
    }

}




signed main(){
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    // int _t;cin>>_t;while(_t--)
    solve();
}