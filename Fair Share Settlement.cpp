/*
Author:- Ayush Meena
*/

#include<bits/stdc++.h>
using namespace std;
#define ll long long 
int main(){
    ios::sync_with_stdio(false); cin.tie(NULL);
    ll t; cin>>t;
    while(t--){
        ll n,k; cin>>n>>k;
        cout<<n-((n/(k+1))*k)<<'\n';
    }
    return 0;
}
