/**
 *    author:  isilent
 *    Q : LEAGUE      
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
        int N,TMP;
        cin>>N;
        TMP=(N-1)*3;
        TMP-=((N-1)/2)*3;
        cout<<TMP<<'\n';
    }
}