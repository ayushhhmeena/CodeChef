/**
 *    author:  isilent     
 *    Q : DIF_GCD
**/
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pll pair<ll, ll>
int main(){
    ll T=0;
    cin>>T;
    while(T--){
        ll N,M;
        cin>>N>>M;
        ll a=N, diff=-1;
        pll ans;
        ll range=min(2*N,N);
        for (;a<=range;a++) {
            ll b=a*(M/a);
            if(diff<=abs(b-a)){
                ans={a,b};
                diff=abs(b-a);
            }
        }
        cout<<ans.first<<" "<<ans.second<<'\n';
    }
    return 0;
}