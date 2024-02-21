#include<bits/stdc++.h>
#define ll long long
using namespace std;
void soln(){
    ll r[22],w[22],s[22];
    ll tp=0,ans=0;
    for(ll i=0;i<22;i++){
        cin>>r[i]>>w[i];
        s[i]=r[i]+(w[i]*20);
        if(s[i]>tp){
            tp=s[i];
            ans=i;
        }
    }
    cout<<ans+1<<'\n';
}
int main(){
    ll t=1; 
    cin>>t;
    while(t--){
        soln();
    }
    return 0;
}
