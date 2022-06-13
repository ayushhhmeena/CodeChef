/**
 *    author:  ayushh16
 *    Q : DIVBYI      
**/
#include<bits/stdc++.h>
int main(){
    using std::cout;
    using std::cin;
    using std::string;
    std::ios_base::sync_with_stdio(false);
    int T;
    cin>>T;
    while(T--){
        int N;
        cin>>N;
        int P[N];
        int P1;
        if(N%2!=0){
            P1=N/2+1;
            int odd=P1-1,even=P1;
            for(int i=0;i<N;i++){
                if(i%2==0){
                    P[i] = even;
                    even++;
                }else{
                    P[i] = odd;
                    odd--;
                }
            }
        }else{
            P1=N/2;
            int odd=P1+1,even= P1;
            for(int i=0;i<N;i++){
                if(i%2==0){
                    P[i]=even;
                    even--;
                }else{
                    P[i]=odd;
                    odd++;
                }
            }
        }
        for(int i=0;i<N;i++){
            cout<<P[i]<<" ";
        }
        cout<<'\n';
    }
}