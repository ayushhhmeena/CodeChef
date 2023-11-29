/* need_job
   CodeChef
   Ayush M
*/
#include<bits/stdc++.h>
using namespace std;
#define ll long long 
int main(){
    int t; cin>>t;
    while(t--){
        int x,n; cin>>x>>n;
        int tp1=x*100;
        if(tp1>=n){
            cout<<"0"<<'\n';
        }else{
            float tp2=n-tp1;
            cout<<ceil(tp2/100)<<'\n';
        }
    }
    return 0;
}
