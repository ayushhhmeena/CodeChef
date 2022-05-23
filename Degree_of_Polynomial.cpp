/**
 *    author:  isilent     
 *    Q : DPOLY 
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
        int I[N];
        for(int i=0;i<N;i++){
            cin>>I[i];
            if(I[i]!=0){
                tmp=i;
            }
        }
        cout<<tmp<<'\n';
    }
}