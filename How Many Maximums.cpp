#include<bits/stdc++.h>
#define ll long long
using namespace std;
void soln(){
    ll n; cin>>n;
    //vector<string>s;
    //ll tp; cin>>tp;
    //s.push_back(tp);
    string s; cin>>s;
    s='0'+s+'1';
    ll cnt=0;
    for(ll i=1;i<=n;i++){
        if(s[i]=='1' && s[i-1]=='0'){
            cnt++;
        }
    }
    cout<<cnt<<'\n';
}
int main(){
    ll t=1; 
    cin>>t;
    while(t--){
        soln();
    }
    return 0;
}
