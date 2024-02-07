#include <bits/stdc++.h>
using namespace std;

int main(){
    int t,n,c1,c2;
    cin>>t;
    while(t--){
        cin>>n;
        if(n%3==0){
            c1=c2=n/3;
            cout<<c1 << " "<<c2<<endl;
        }
        else{
            c2=n/3;
            c1=c2+1;
            if((c1+2*c2)==n){
                cout<<c1 << " "<<c2<<endl;
            }
            else{
                swap(c1,c2);
                cout<<c1 << " "<<c2<<endl;
            }
        }
    }
    return 0;
}
