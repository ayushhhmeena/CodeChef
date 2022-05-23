/**
 *    author:  isilent      
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
        int ARR[4];
        for(int i=0;i<4;i++){
            cin>>ARR[i];
            if(ARR[i]>tmp){
                tmp=ARR[i];
            }
        }
        cout<<tmp<<'\n';
    }
}