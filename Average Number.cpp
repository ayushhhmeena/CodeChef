#include<bits/stdc++.h>
#define ll long long
using namespace std;
void soln(){
    ll n,k,v; cin>>n>>k>>v;
    //vector<int>v;
    ll arr_sum=0;
    for(ll i=0;i<n;++i){
        ll x; cin>>x;
        arr_sum+=x;
        //v.push_back(x);
    }
    ll tp=((n+k)*v)-arr_sum;
    if(tp>0 && tp%k==0){
        cout<<tp/k<<'\n';
    }else{
        cout<<"-1\n";
    }
}
int main(){
    ll t=1; 
    cin>>t;
    while(t--){
        soln();
    }
    return 0;
}
