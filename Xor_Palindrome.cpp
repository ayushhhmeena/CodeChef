/**
 *    author:  isilent    
 *    Q : XOR_PAL  
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
        int N;
        cin>>N;
        int len=N,res=0;
        std::string S;
        cin>>S;
        long long i=0,j=N-1,tmp=0;
        while(i<j){
            if(S[i] != S[j]){
                tmp++;
            }
            i++,j--;
        }
        cout<<(tmp+1)/2<<'\n';
    }
}