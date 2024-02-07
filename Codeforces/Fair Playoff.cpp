#include <bits/stdc++.h>
using namespace std;

int main(){
    int t,arr[4],max1,max2,min1,min2;
    cin>>t;
    while(t--) {
        for (int i = 0; i < 4; i++) {
            cin >> arr[i];
        }
        max1 = max(arr[0], arr[1]); //3 7 9 5   4 5 6 9   5 3 8 1   6 5 3 2
        max2 = max(arr[2], arr[3]);
        min1 = min(arr[0], arr[1]);
        min2 = min(arr[2], arr[3]);
        if ((min1 > max1 || min1 > max2)||((min2 > max1 || min2 > max2))) {
            cout << "NO" << endl;
            continue;
        }
        else{
            cout<<"YES"<<endl;
        }
    }
    return 0;
}