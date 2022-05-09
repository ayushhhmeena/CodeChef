/**
 *    author:  weeee
 *    Q : XORGAND      
**/
#include <bits/stdc++.h>
using namespace std;
int main(){
    using std::cout;
    using std::cin;
    std::ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int T;
    cin>>T;
    while(T--){
        int N;
        cin>>N;
        int MAA[N];
        for(int i=0;i<N;i++){
            cin>>MAA[i];
        }
        int MAAA[N+1][33];
        for(int i=1;i<=N;i++){
            int tmp=MAA[i-1];
            for(int j=0;j<33;j++){
                MAAA[i][j]=MAAA[i-1][j];
            }
            int p=32;
            if(tmp!=0){
                p=int(log(tmp)/log(2));
            }
            MAAA[i][p]++;
        }
        int q;
        cin>>q;
        for(int i=0;i<q;i++){
            int x,l,r,cn=0,sc,pw=32;
            cin>>x>>l>>r;
            if(r!=0){
                pw=int(log(r)/log(2));
            }
            cn=MAAA[l][pw]-MAAA[x-1][pw];
            int ans=(l-x+1)-cn;
            cout<<ans<<'\n';
        }
    }
    return 0;
}