#include<bits/stdc++.h>
#define ll long long
using namespace std;
void soln(){
    ll n,k; cin>>n>>k;
    for(ll i=1;i<=k;++i){
        cout<<(i*(n/k))<<" ";
    }
    cout<<'\n';
}
int main(){
    ll t=1; 
    cin>>t;
    while(t--){
        soln();
    }
    return 0;
}
