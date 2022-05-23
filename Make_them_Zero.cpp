/**
 *    author:  isilent    
 *    Q : MAKEZERO  
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
        int N,tmp=0;
        cin>>N;
        int AN[32]={};
        for(int i=0;i<N;i++){
            int A,j=0;
            cin>>A;
            while(A!=0){
                if(AN[j]==0){
                    AN[j]=A%2;
                }
                A/=2;
                j++;
            }
        }
        for(int i=0;i<32;i++){
            tmp+=AN[i];
        }
        cout<<tmp<<'\n';
    }
}