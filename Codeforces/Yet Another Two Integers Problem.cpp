#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    double a,b;
    cin>>t;
    while(t--){
        int count;
        cin>>a>>b;
        if(b>a){
            swap(a,b);
        }
        count= ceil((a-b)/10);
        cout<<count<<endl;
    }
    return 0;
}

