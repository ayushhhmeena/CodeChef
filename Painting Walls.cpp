#include<bits/stdc++.h>
#define ll long long
using namespace std;
void soln(){
    ll x,y,z,ans=0,tp=0; cin>>x>>y>>z;
    ans=(x*y)*2;
    for(int i=0;i<10000;i++){
        if(ans<=z){
            tp++;
            z=z-ans;
        }else{
            break;
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
