/**
 *    author:  isilent
 *    Q : F1RULE      
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
        int X,Y;
        cin>>X>>Y;
        if(1.07*X>=Y){
            cout<<"YES\n";
        }else{
            cout<<"NO\n";
        }
    }
}