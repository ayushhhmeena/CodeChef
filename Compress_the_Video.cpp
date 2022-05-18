/**
 *    author:  isilent     
 *    Q : COMPRESSVD
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
        int N;
        cin>>N;
        int arr[N];
        vector<int>sol;
        for(int i=0;i<N;i++){
            cin>>arr[i];
        }
        int tmp=0;
        for(int i=0;i<N-1;i++){
            if(arr[i]==arr[i+1]){
                tmp++;
            }
        }
        cout<<N-tmp<<endl;
    }
}