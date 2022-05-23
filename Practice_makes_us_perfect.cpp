/**
 *    author:  isilent     
 *    Q : PRACTICEPERF 
**/
#include<bits/stdc++.h>
int main(){
    using std::cout;
    using std::cin;
    std::ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int P1,P2,P3,P4,tmp=0;
    cin>>P1>>P2>>P3>>P4;
    if(P1>=10){
        tmp+=1;
    }
    if(P2>=10){
        tmp+=1;
    }
    if(P3>=10){
        tmp+=1;
    }
    if(P4>=10){
        tmp+=1;
    }
    cout<<tmp;
}