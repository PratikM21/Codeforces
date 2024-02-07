#include <bits/stdc++.h>
using namespace std;

int main(){
    int a,b;
    int mx, mn,result;
    cin>>a>>b;
    mx= max(a,b);
    mn= min(a,b);
    result=(mx-mn)/2;
    cout<<mn<< " "<<result<<endl;
    return 0;
}