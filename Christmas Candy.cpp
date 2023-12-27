#include<bits/stdc++.h>
#define ll long long
using namespace std;
void solve(){
    ll n,tp=0; cin>>n;
    vector<int> arr(n);
    for(ll i=0;i<n;++i){
        cin>>arr[i];
    }
    ll cnt=arr[0];
    for(ll i=1;i<n;i++){
        if(arr[i]<cnt){
            tp+=1;
        }else{
            cnt=arr[i];
        }
    }
    cout<<tp<<'\n';
}
int main(){
    ll t=1;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}
