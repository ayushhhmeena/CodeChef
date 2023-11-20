#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
        int n,x=0,y=0;
        cin>>n;
        string tp; 
        cin>>tp;
        for(int i=0;i<n;i++){
            if(tp[i]=='?'){
                x++;
            }else{
                y=y+(tp[i]-'0');
            }
        }
        if(tp[0]=='?'){
            cout<<1;
            x--;
            while(x--){
                cout<<0;
            }
            cout<<'\n';
        }else{
            if(x>0){
                y=y%9;
                if(y==0){
                    x--;
                    while(x--) cout<<1;
                    cout<<2<<'\n';
                }else{
                    while(x--) cout<<1;
                    cout<<'\n';
                }
            }else{
                if(y%9){
                    cout<<0<<'\n';
                }else{
                    cout<<1<<'\n';
                }            
            }
        }
    }
}
