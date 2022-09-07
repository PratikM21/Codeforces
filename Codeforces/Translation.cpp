#include<stdio.h>
#include<string.h>
int main(){
	char s[101],t[101];
	int i,j=0,n,count=0;
	scanf("%s",&s);
	scanf("%s",&t);
	n=strlen(s);
	for(i=n-1;i>=0;i--){
		while(j<n){
			if(t[i]==s[j]){
				count++;
				j++;
				break;
			}
			else{
				j++;
				break;
				
			}	
		}
	}
	if(count==n){
		printf("YES");
	}
	else{
		printf("NO");
	}
	return 0;
}
