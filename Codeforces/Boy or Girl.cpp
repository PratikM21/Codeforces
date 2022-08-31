#include<stdio.h>
#include<string.h>
int main(){
	int i,j,k;
	char s[101];
	gets(s);
	int n=strlen(s);
	for(i=0;i<n;i++){
		for(j=i+1;j<n;j++){
			if(s[i]==s[j]){
				for(k=j;k<n-1;k++){
					s[k]=s[k+1];
				}
				n--;
				j--;
			}
		}
	}
	if(n%2==0){
		printf("CHAT WITH HER!");
	}
	else{
		printf("IGNORE HIM!");
	}
	return 0;
}
