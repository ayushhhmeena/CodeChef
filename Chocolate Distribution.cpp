#include<bits/stdc++.h>
#define ll long long
using namespace std;
void soln(){
    ll n; cin>>n;
    if(n==1){
        cout<<1<<" "<<1<<'\n';
        return;
    }
    if(n%2!=0){
        cout<<(n/2)+1<<" "<<n<<'\n';
    }else{
        cout<<n/2<<" "<<n<<'\n';
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
