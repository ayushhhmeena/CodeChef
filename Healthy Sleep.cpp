#include<bits/stdc++.h>
#define ll long long
using namespace std;
void soln(){
    ll h; cin>>h;
    if(h<8){
        cout<<"LESS";
    }else if(h==8){
        cout<<"PERFECT";
    }else if(h>8){
        cout<<"MORE";
    }
}
int main(){
    ll t=1; 
    //cin>>t;
    while(t--){
        soln();
    }
    return 0;
}
