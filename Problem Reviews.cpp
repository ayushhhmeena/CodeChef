#include<bits/stdc++.h>
#define ll long long
using namespace std;
void soln(){
    ll n,tp=0; cin>>n;
    ll arr[n];
    for(ll i=0;i<n;i++){
        cin>>arr[i];
        if(arr[i]<=4){
            tp++;
        }
    }
    if(tp>0){
        cout<<"NO\n";
    }else{
        cout<<"YES\n";
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
