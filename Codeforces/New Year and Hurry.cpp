#include <bits/stdc++.h>
using namespace std;

int main(){
    int n,k,result=0,count=0;
    cin>>n>>k;
    for(int i=1;i<=n;i++){
        result=result+(i*5);
        if((result+k<=240)){
            count++;
        }
        else{
            break;
        }
    }
    cout<<count<<endl;
    return 0;
}
