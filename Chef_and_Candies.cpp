/**
 *    author:  ayushh16
 *    Q : CHEFCAND      
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
        int N,X;
        cin>>N>>X;
        if(X>=N){
            cout<<"0"<<'\n';
        }else{
            cout<<ceil((N-X)*1.0/4)<<'\n';
        }
    }
    return 0;
}