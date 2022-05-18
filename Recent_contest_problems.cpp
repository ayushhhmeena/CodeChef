/**
 *    author:  isilent     
 *    Q : RECENTCONT
**/
#include<bits/stdc++.h>
int main(){
    using std::cout;
    using std::cin;
    using std::string;
    std::ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int T;
    cin>>T;
    while(T--){
        int N,T1=0,T2=0;
        cin>>N;
        string A;
        for(int i=0;i<N;i++){
            cin>>A;
            if(A=="START38"){
                T1++;
            }else{
                T2++;
            }
        }
        cout<<T1<<" "<<T2<<'\n';
    }
}