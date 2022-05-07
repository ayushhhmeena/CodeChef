/**
 *    author:  isilent
 *    Q : POOK      
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
        int N;
        cin>>N;
        if(N==1){
            cout<<"1"<<'\n';
        }else if(N>=2 && N<4){
            cout<<N-1<<'\n';
        }else{
            cout<<N<<'\n';
        }
    }
}