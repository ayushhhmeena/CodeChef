#include<bits/stdc++.h>
#define ll long long
using namespace std;
void soln(){
    ll x; cin>>x;
    cout<<"K"<<setfill('0')<<setw(2)<<abs(x%100);
}
int main(){
    ll t=1; 
    //cin>>t;
    while(t--){
        soln();
    }
    return 0;
}
