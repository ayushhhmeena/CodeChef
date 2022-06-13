/**
 *    author:  ayushh16
 *    Q : DISTGCD      
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
        int A,B,tmp=0;
        cin>>A>>B;
        int N=abs(B-A);
        for(int i=1;i<=sqrt(N);i++){
            if(N%i==0){
                if(N/i==i){
                    tmp++;
                }else{
                    tmp+=2;
                }
            }
        }
        cout<<tmp<<'\n';
    }
}