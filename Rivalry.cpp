#include<bits/stdc++.h>
using namespace std;
int main(){
    int rd,re;
    int cd,ce;
    cin>>rd>>re;
    cin>>cd>>ce;
    int frd=rd+cd;
    int fre=re+ce;
    if(frd>fre) {
        cout<<"Dominater"<<'\n';
    }else{
        cout<<"Everule"<<'\n';
    }
    return 0;
}
