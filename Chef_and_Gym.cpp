/**
 *    author:  isilent
 *    Q : CGYM      
**/
#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
#include<map>
#include<set>
#include<bitset>
#include<unordered_map>
#include<unordered_set>
#include<queue>
int main(){
    using std::cout;
    using std::cin;
    std::ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int T;
    cin>>T;
    while(T--){
        int X,Y,Z,TMP;
        cin>>X>>Y>>Z;
        if(Z<(X+Y)){
            if(Z>=X){
                cout<<"1"<<'\n';
            }else{
                cout<<"0"<<'\n';
            }
        }else{
            cout<<"2"<<'\n';
        }
    }
}