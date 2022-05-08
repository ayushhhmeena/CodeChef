/**
 *    author:  isilent
 *    Q : Pushpa       
**/
#include<bits/stdc++.h>
using namespace std;
int main(){
    using std::cout;
    using std::cin;
    std::ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int T;
    cin>>T;
    while(T--){
        int N,max=0,c=0;
        cin>>N;
        int H[N];
        for(int i=0;i<N;i++){
            cin>>H[i];
        }
        sort(H,H+N,greater<int>());
        if(N==1){
            max=H[N-1];
        }else{
            for(int i=0;i<N-1;i++){
                if(H[i]==H[i+1]){
                    c++;
                }else if(max<H[i]+c){
                    max=H[i]+c;
                    c=0;
                }
            }
        }
        cout<<max<<'\n';
    }
}