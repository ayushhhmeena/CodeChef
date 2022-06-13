/**
 *    author:  ayushh16
 *    Q : EXMV      
**/
#include <bits/stdc++.h>
int main(){
    using std::cout;
    using std::cin;
    std::ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int T;
    cin>>T;
    while(T--){
        int X,N;
        cin>>X>>N;
        cout<<(X-1)*(2*N-X)<<'\n';
    }
}