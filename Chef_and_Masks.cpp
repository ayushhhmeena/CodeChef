/**
 *    author:  isilent
 *    Q : CMASKS      
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
        int X,Y;
        cin>>X>>Y;
        if(X*100 == Y*10){
            cout<<"Cloth"<<'\n';
        }else if(Y*10 > X*100){
            cout<<"Disposable"<<'\n';
        }else{
            cout<<"Cloth"<<'\n';
        }
    }
}