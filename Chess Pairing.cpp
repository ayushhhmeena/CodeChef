#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    for(int i=0;i<t;++i) {
        int n,x;
        cin>>n>>x;
        int mini=(2*n)-x;
        if(x-mini>0) {
            cout<<(x-mini)<<'\n';
        }else{
            cout<<0<<'\n';
        }
    }
    return 0;
}
