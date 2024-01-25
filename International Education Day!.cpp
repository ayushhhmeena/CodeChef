#include<bits/stdc++.h>
#define ll long long
using namespace std;
void soln(){
    ll a,b,c; cin>>a>>b>>c;
    a=a*c;
    b=b*c;
    cout<<max(a,b);
}
int main(){
    ll t=1; 
    //cin>>t;
    while(t--){
        soln();
    }
    return 0;
}
