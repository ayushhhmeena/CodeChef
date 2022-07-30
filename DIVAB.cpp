/**
 *    author:  isilent     
 *    Q : DIVAB
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
        int A,B,N;
        cin>>A>>B>>N;
        if(A%B==0){
            cout<<"-1"<<'\n';
        }else{
            if(N%A==0 && N%B!=0){
                cout<<N<<'\n';
            }else{
                while(N%A!=0 || N%B==0){
                    N=((N/A)*A)+A;
                }
                cout<<N<<'\n';
            }
        }
    }
    return 0;
}