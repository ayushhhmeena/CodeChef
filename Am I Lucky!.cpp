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
        int n,nb,k; cin>>n>>nb>>k;
        int ng=n-nb;
        int g_g=ng%k;
        int g_b=nb%k;
        if(g_g==g_b){
            cout<<"0"<<'\n';
        }else if(g_g>g_b){
            cout<<g_g-g_b<<'\n';
        }else{
            cout<<g_b-g_g<<'\n';
        }
    }
    return 0;
}
