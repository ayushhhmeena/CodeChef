#include<bits/stdc++.h>
#define ll long long
using namespace std;
void soln(){
    ll n,m; cin>>n>>m;
    vector<ll>v;
    for(ll i=0;i<n;++i){
        ll tmp; cin>>tmp;
        v.push_back(tmp);
    }
    ll tp=0,tp1=0;
    for(ll i=0;i<n;++i){
        tp1+=v[i];
        if(tp1>=m){
            tp++;
            tp1=0;
        }
    }
    cout<<tp<<'\n';
}
int main(){
    ll t=1; 
    cin>>t;
    while(t--){
        soln();
    }
    return 0;
}
