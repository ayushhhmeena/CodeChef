#include<bits/stdc++.h>
#define ll long long
using namespace std;
void soln(){
    ll n,m,x,y,l; cin>>n>>m>>x>>y>>l;
    if(l==1){
        cout<<n*m<<'\n';
    }else{
        cout<<1+(((x-1)/l)+((n-x)/l))+(((y-1)/l)+((m-y)/l))+(((x-1)/l)+((n-x)/l))*(((y-1)/l)+((m-y)/l))<<'\n';
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
