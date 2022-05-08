/**
 *    author:  isilent
 *    Q : QUEENATTACK      
**/
#include<bits/stdc++.h>
using namespace std;
int main(){
    std::ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int T;
    cin>>T;
    while(T--){
        int N,X,Y,M,B,R;
        cin>>N>>X>>Y;
        B=(min(X,Y)-1)+(N-max(X,Y))+(min(X,(N+1)-Y)-1)+N-max(X,(N+1)-Y);
        R=(N-1)+(N-1);
        M=B+R;
        cout<<M<<'\n';
    }
}