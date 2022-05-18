/**
 *    author:  isilent     
 *    Q : AORB
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
        int A,B;
        cin>>A>>B;
        if((A*2)+(A+B)*4>=(B*4)+(B+A)*2){
            cout<<1500-((B*4)+(B+A)*2)<<'\n';
        }else{
            cout<<1500-((A*2)+(A+B)*4)<<'\n';
        }
    }
}