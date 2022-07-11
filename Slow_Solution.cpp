/**
 *    author:  ayushh16
 *    Q : SLOWSOLN      
**/
#include<bits/stdc++.h>
#define ll long long
int main(){
    using std::cout;
    using std::cin;
    std::ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int T;
    cin>>T;
    while(T--){
        int maxT,maxN,sumN;
        cin>>maxT>>maxN>>sumN;
        ll tmp=0;
        while(maxT-- && sumN>0){
            if(sumN>=maxN){
                tmp+=pow(maxN,2);
                sumN-=maxN;
            }else{
                tmp+=pow(sumN,2);
                break;
            }
        }
        cout<<tmp<<'\n';
    }
    return 0;
}