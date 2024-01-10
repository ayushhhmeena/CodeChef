#include<bits/stdc++.h>
#define ll long long
using namespace std;
void soln(){
    ll n; cin>>n;
    ll tp=(ll)sqrtl(n);
    if(n%2==1){
        tp++;
    }
    cout<<tp/2<<'\n';
}
int main(){
    ll t=1; 
    cin>>t;
    while(t--){
        soln();
    }
    return 0;
}
