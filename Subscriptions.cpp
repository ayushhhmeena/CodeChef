/**
 *    author:  ayushh16
 *    Q : SUBSCRIBE_      
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
        if(N<=6){
            cout<<X<<'\n';
        }else{
            int tmp=N/6;
            if(N%6==0){
                cout<<tmp*X<<'\n';
            }else{
                cout<<tmp*X+X<<'\n';
            }
        }
    }
}