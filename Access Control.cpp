#include<bits/stdc++.h>
#define ll long long
using namespace std;
void soln(){
    ll n,x,tp=0,main=0; cin>>n>>x;
    string s; cin>>s;
    if(s[0]=='0'){
        cout<<"NO\n";
    }else{
        for(ll i=0;i<n;i++){
            if(s[i]=='0'){
                tp++;
                if(tp>x){
                    main++;
                }
            }else{
                tp=0;
            }
        }
        if(main>0){
            cout<<"NO\n";
        }else{
            cout<<"YES\n";
        }
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
