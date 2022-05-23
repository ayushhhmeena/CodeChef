/**
 *    author:  isilent    
 *    Q : SUBARRAYLEN  
**/
#include<bits/stdc++.h>
using namespace std;
#define int long long
int aaa(){
    int N;
    cin>>N;
    long long tmp=(long long)N*(N+1)/2;
    vector<vector<int>>inds(N+1,vector<int>(1,-1));
    for(int i=0;i<N;i++){
        int x;
        cin>>x;
        inds[x].push_back(i);
    }
    for(int i=1;i<=N;i++){
        inds[i].push_back(N);
        for(int j=1;j<(int)inds[i].size();j++){
            int l=inds[i][j]-inds[i][j-1]-1;
            tmp-=max(0LL,l-i+1);
        }
    }
    cout<<tmp<<'\n';
    return 0;
}
signed main(){
    std::ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int T;
    cin>>T;
    while(T--){
        aaa();
    }
}