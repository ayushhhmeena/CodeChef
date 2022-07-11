/**
 *    author:  ayushh16
 *    Q : PASSTHEEXAM      
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
        int A,B,C;
        cin>>A>>B>>C;
        if(A+B+C>=100 && A>=10 && B>=10 && C>=10){
            cout<<"PASS"<<'\n';
        }else{
            cout<<"FAIL"<<'\n';
        }
    }
    return 0;
}