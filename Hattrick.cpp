#include<bits/stdc++.h>
#define ll long long
using namespace std;
void soln(){
    string a,b,c,d,e,f; cin>>a>>b>>c>>d>>e>>f;
    string w="W";
    if( (a==w&&b==w&&c==w) || (d==w&&b==w&&c==w) || (e==w&&d==w&&c==w) || (d==w&&e==w&&f==w) ){
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
