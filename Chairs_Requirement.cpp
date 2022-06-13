/**
 *    author:  ayushh16
 *    Q : CHAIRS_      
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
        int X,Y;
        cin>>X>>Y;
        if(X>Y){
            cout<<X-Y<<'\n';
        }else{
            cout<<0<<'\n';
        }
    }
}