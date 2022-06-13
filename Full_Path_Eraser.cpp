/**
 *    author:  ayushh16
 *    Q : FPE
 *    Comment : Not Mine Refered from someone else      
**/
#include<bits/stdc++.h>
#define ll long long
using namespace std;
ll FSlv(ll a, ll b,map<ll,vector<ll>> &dics,vector<ll> &arr,vector<ll> &inter,vector<ll> &final){
    ll cnts = arr[a];
    ll s=0;
    for(auto& i: dics[a]){
        if(i!=b){
            ll ext = FSlv(i,a,dics,arr,inter,final);
            s+=ext;
            cnts = __gcd(cnts,ext);
        }
    }
    inter[a]=cnts;
    final[a]=s;
    return cnts;
}
void fnd(ll a,ll b,ll su,map<ll,vector<ll>> &dics,vector<ll> &arr,vector<ll> &inter,vector<ll> &final,ll &cnt){
    cnt = max(cnt,su);
    for(auto& i: dics[a]){
        if(i!=b)fnd(i,a,su-inter[i]+final[i],dics,arr,inter,final,cnt);
    }
}
int main(){
    std::ios_base::sync_with_stdio(false);
    int T;
    cin>>T;
    while(T--){
        int N;
        cin>>N;
        vector<ll> arr(N);
        vector<ll> inter(N);
        vector<ll> final(N);
        ll cnt=0;
        map<ll,vector<ll>> dics;
        for (ll i = 0; i<N; ++i) {
            cin>>arr[i];
        }
        for(int i=0;i<N-1;i++){
            ll x,y;
            cin>>x>>y;
            x--;
            y--;
            dics[x].push_back(y);
            dics[y].push_back(x);
        }
        ll ok = FSlv(0,-1,dics,arr,inter,final);
        fnd(0,-1,final[0],dics,arr,inter,final,cnt);
        cout<<cnt<<'\n';
    }
}