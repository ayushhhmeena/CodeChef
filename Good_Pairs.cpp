/**
 *    author:  isilent   
 *    Q : GOODPAIRS   
**/
#include<bits/stdc++.h>
using namespace std;
int main(){
    std::ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int T;
    cin>>T;
    while(T--){
        int N;
        cin>>N;
        vector<int> a(N),b(N);
        for(int &x: a)cin>>x;
        for(int &y: b)cin>>y;
        map<pair<int,int>,int>pre;
        long long ans=0;
        for(int i=0;i<N;i++){
            ans+=pre[{a[i],b[i]}];
            pre[{b[i],a[i]}]++;
        }
        cout<<ans<<'\n';
    }
    return 0;
}