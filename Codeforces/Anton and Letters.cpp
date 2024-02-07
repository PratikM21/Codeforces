#include<bits/stdc++.h>
using namespace std;
int main(){
    int count=0;
    string str;
    getline(cin,str);
    string str2;
    int j=0;
    for(int i=0;i<str.length();i++){
        if(str[i]>=97 && str[i]<=122){
            str2[j]=str[i];
            j++;
        }
    }
    for(int i=0; i<str2.length();i++){
        cout<<str2[i];
    }
    sort(str2.begin(),str2.end()); //aaabbcdd
    for(int i=0;i<str2.length()-1;i++){
        if(str2[i]!=str2[i+1]) count++;
    }
    cout<<count<<endl;
    return 0;
}