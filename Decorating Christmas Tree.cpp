#include<bits/stdc++.h>
#define ll long long
using namespace std;
void soln(){
    ll n,x,y,tp=0; cin>>n>>x>>y;
    tp=min(y/3,x);
    y-=tp*3;
    x-=tp;
    n-=tp;
    if((x/2)>=n || n<=0){
        cout<<"YES\n";
    }else{
        cout<<"NO\n";
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
