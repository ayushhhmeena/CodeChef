/**
 *    author:  isilent
 *    Q : FOOTCUP      
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
        if(X==Y && X>0 && Y>0){
            cout<<"YES\n";
        }else{
            cout<<"NO\n";
        }
    }
}