/**
 *    author:  ayushh16
 *    Q : EQUALSTRING      
**/
#include<bits/stdc++.h>
int main(){
    using std::cout;
    using std::cin;
    using std::string;
    std::ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int T;
    cin>>T;
    while(T--){
        int N,ARR[26]={0};
        cin>>N;
        string S1,S2;
        cin>>S1>>S2;
        for(int i=0;i<=N;i++){
            if(S1[i]!=S2[i]){
                char tmp=S2[i];
                int tmp2=tmp-'a';
                ARR[tmp2]=1;
            }
        }
        int ANS=0;
        for(int i=0;i<26;i++){
            if(ARR[i]==1){
                ANS++;
            }
        }
        cout<<ANS<<'\n';
    }
}