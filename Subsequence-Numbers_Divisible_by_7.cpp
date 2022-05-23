/**
 *    author:  isilent    
 *    Q : SUBARRAYLEN  
**/
#include<bits/stdc++.h>
using namespace std;
int main(){
    std::ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int T;
    cin>>T;
    while(T--){
        const int M=1e9+7;
        int N;
        cin>>N;
        vector<int>a(N);
        for(int i=0;i<N;i++){
            cin>>a[i];
        }
        vector<vector<int>>AN(N+1,vector<int>(7));
        AN[0][0]=1;
        for(int i=0;i<N;i++){
            int tmp1=(int)to_string(a[i]).size();
            int tmp2=1;
            while(tmp1--){
                tmp2*=10;
            }for(int j=0;j<7;j++){
                int use=(j*tmp2+a[i])%7;
                AN[i+1][j]=(AN[i+1][j]+AN[i][j])%M;
                AN[i+1][use]=(AN[i+1][use]+AN[i][j])%M;
            }
        }
        cout<<(AN[N][0]-1+M)%M<<'\n';
    }
}