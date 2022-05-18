/**
 *    author:  isilent     
 *    Q : CLOSEVOWEL
**/
#include<bits/stdc++.h>
const int E=1e9+7;
using namespace std;
string unique(string s){
    string str;
    int len=s.length();
    for(int i=0;i<len;i++){
        char c=s[i];
        auto found=str.find(c);
        if (found==std::string::npos){
            str+=c;
        }
    }
    return str;
}
int main(){
    std::ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int T;
    cin>>T;
    set<char> sol;
    sol.insert('c');
    sol.insert('g');
    sol.insert('l');
    sol.insert('r');
    while(T--){
        int N;
        cin>>N;
        string S;
        cin>>S;
        int sum=0;
        long long SN=1;
        for(char ch:S){
            if(sol.find(ch)!=sol.end()){
                SN=(SN*2)%E;
            }
        }
        cout<<SN<<'\n';
    }
}