#include<bits/stdc++.h>
#define ll long long
using namespace std;
void soln(){
    long double p,l; cin>>p>>l;
    if(((l/p)*100)>=75){
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
