#include <bits/stdc++.h>
using namespace std;

int main(){
    int n,s=0,d=0,count=-1;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=0;i<n;i++){
        if(arr[i]>=arr[n-1]){//4 1 2 10
            count++;
            if(count%2==0){
                s=s+arr[i];
            }
            else{
                d=d+arr[i];
            }
        }
        if(arr[i]<arr[n-1]){
            count++;
            if(count%2==0){
                s=s+arr[n-1];
                n--;
                i--;
            }
            else{
                d=d+arr[n-1];
                n--;
                i--;
            }
        }
    }
    cout<<s<<" "<<d;
    return 0;
}

