/**
 *    author:  isilent     
 *    Q : BURGERS2
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
        int X,Y,N,R;
        cin>>X>>Y>>N>>R;
        if(R<(N*X)){
            cout<<"-1"<<'\n';
        }else if((R/Y)>=N){
            cout<<"0"<<" "<<N<<'\n';
        }else{
            int tmp1=(Y*N);
            int tmp2=(X-Y);
            int Tmp3=(R-tmp1)/tmp2;
            if(((R-tmp1)%tmp2)!=0){
                Tmp3++;
            }
            cout<<Tmp3<<" "<<N-Tmp3<<'\n';
        }
    }
    return 0;
}