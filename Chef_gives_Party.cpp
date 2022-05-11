/**
 *    author:  isilent   
 *    Q : PARTY2   
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
        int N,X,K;
        cin>>N>>X>>K;
        if((N*X)==K || (N*X)<K){
            cout<<"YES\n";
        }else{
            cout<<"NO\n";
        }
    }
    return 0;
}