/**
 *    author:  weeee
 *    Q : ALTDIA      
**/
#include<bits/stdc++.h>
using namespace std;
int main(){
    using std::cout;
    using std::cin;
    std::ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int T;
    cin>>T;
    while(T--){
        int B,W;
        cin>>B>>W;
        if((W==0 && B>1) || (B==0 && W>1)){
            cout<<"-1\n";
            continue;
        }
        if(B<W){
            for(int i=0;i<B;i++){
                cout<<"B";
            }
            for(int i=0;i<W;i++){
                cout<<"W";
            }
        }else{
            for(int i=0;i<W;i++){
                cout<<"W";
            }
            for(int i=0;i<B;i++){
                cout<<"B";
            }
        }
        cout<<"\n";
        for(int i=1,bb=2;i<W+B;i++) {
            cout<<1<<" "<<bb++<<"\n";
        }
    }
    return 0;
}