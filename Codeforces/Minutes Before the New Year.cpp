#include <bits/stdc++.h>
using namespace std;

int main(){
    int t,hh,mm;
    int result;
    cin>>t;
    while(t--){
        cin>>hh>>mm;
        mm=60-mm;
        hh++;
        hh=24-hh;
        result=(hh*60)+mm;
        cout<< result<< endl;
    }
    return 0;
}