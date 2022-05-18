/**
 *    author:  isilent     
 *    Q : C_RATING
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
        int X,Y,A=0;
        cin>>X>>Y;
        if(X==Y){
            cout<<"0"<<'\n';
        }else{
            for(int i=0;i<Y;i++){
                X=X+8;
                A++;
                if(X>=Y){
                    break;
                }
            }
            cout<<A<<'\n';
        }
    }
}