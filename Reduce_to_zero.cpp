/**
 *    author:  ayushh16
 *    Q : RED0      
**/
#include <bits/stdc++.h>
#define ll long long
using std::cout;
using std::cin;
void FN(){
    ll X,Y;
    cin>>X>>Y;
    ll MM1,MM2;
    if(X>Y){
        MM2=X;
        MM1=Y;
    }else{
        MM1=X;
        MM2=Y;
    }
    if(MM1==MM2){
        cout<<MM1<<'\n';
        return;
    }
    if(MM1==0 || MM2==0){
        cout<<"-1"<<'\n';
        return;
    }else{
        if(MM1>(MM2/2))
        cout<<MM2+1<<'\n';
        else{
            ll ans=ceil(log2(((MM2*1.0/2)*1.0)/MM1));
            cout<<ans+MM2+1<<'\n';
        }
    }
}
int main(){
    std::ios_base::sync_with_stdio(false);
    int T;
    cin>>T;
    while(T--){
        FN();
    }
    return 0;
}