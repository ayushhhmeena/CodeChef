/**
 *    author:  ayushh16
 *    Q : ALTERADD      
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
        if((B-A)%3==2){
            cout<<"NO"<<'\n';
        }else{
            cout<<"YES"<<'\n';
        }
    }
}