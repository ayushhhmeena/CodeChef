/**
 *    author:  isilent   
 *    Q : DOMINANT   
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
        int NA,NB,NC;
        cin>>NA>>NB>>NC;
        if( (NA>(NB+NC)) || (NB>(NA+NC)) || (NC>(NA+NB)) ){
            cout<<"YES\n";
        }else{
            cout<<"NO\n";
        }
    }
    return 0;
}