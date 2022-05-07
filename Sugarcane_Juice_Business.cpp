/**
 *    author:  isilent
 *    Q : SUGARCANE      
**/
#include<iostream>
#include<string>
#include<vector>
int main(){
    using std::cout;
    using std::cin;
    std::ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int T;
    cin>>T;
    while(T--){
        int N,NI,cane,mint,rent;
        cin>>N;
        NI=50*N;
        cane=0.2*NI;
        mint=0.2*NI;
        rent=0.3*NI;
        cout<<NI-(cane+mint+rent)<<'\n';
    }
}