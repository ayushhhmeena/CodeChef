/**
 *    author:  isilent   
 *    Q : DOMINANT   
**/
#include<bits/stdc++.h>
using namespace std;
int main(){
    using std::cout;
    using std::cin;
    std::ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        int A,B,M;
        cin>>A>>B>>M;
        cout<<min(abs(B-A),abs(M-(abs(B-A))))<<'\n';
    }
    return 0;
}