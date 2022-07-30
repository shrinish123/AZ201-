#include<bits/stdc++.h>
using namespace std;

#define int long long



void solve(){
    string s;
    cin>>s;
    int arr[4];

    for(int i=1;i<=3;i++){
        arr[i] =0;
    }
    arr[1] =1;

    for(int i=0;i<s.size();i++){

      if(s[i] == 'A'){

          int temp= arr[1];
          arr[1] = arr[2];
          arr[2] =  temp; 

      }else if(s[i] == 'B'){

          int temp = arr[2];
          arr[2] = arr[3];
          arr[3] =temp;

      }else {
         int temp = arr[1];
         arr[1] = arr[3];
         arr[3] = temp;
      }
    }

    for(int i=1;i<=3;i++){
        if(arr[i] == 1){
            cout<<i<<endl;
        }
    }


}




signed main(){
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int _t;cin>>_t;while(_t--)
    solve();
}