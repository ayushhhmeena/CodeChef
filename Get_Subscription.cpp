/**
 *    author:  isilent   
 *    Q : SUBSCRIBE   
**/
#include<bits/stdc++.h>
int main(){
    using std::cout;
    using std::cin;
    std::ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int T;
    cin>>T;
    while(T--){
        int X;
        cin>>X;
        if(X>30){
            cout<<"YES\n";
        }else{
            cout<<"NO\n";
        }
    }
    return 0;
}