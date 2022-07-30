/**
 *    author:  isilent     
 *    Q : SUMOFPROD1
**/
#include<bits/stdc++.h>
#define ll long long
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
        int A[N];
        for(int i=0;i<N;i++){
            cin>>A[i];
        }
        ll tmp1=0;
        for(int i=0;i<N;i++){
            if(A[i]==0)
                continue;
            ll tmp2=0;
            while(i<N && A[i]==1){
                i++;
                tmp2++;
            }
            tmp1=tmp1+(tmp2*(tmp2+1))/2;
        }
        cout<<tmp1<<'\n';
    }
    return 0;
}