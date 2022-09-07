#include<stdio.h>
#include<string.h>
int main(){
	char s[1000];
	int n,i,j,k,count=0;
	scanf("%d",&n);
	scanf("%s",&s);
	for(i=65;i<=90;i++){
		k=i+32;
		for(j=0;j<n;j++){
			if(s[j]==i||s[j]==k){
				count++;
				break;
			}
		}
	}
	if(count>=26){
		printf("YES");
	}
	else{
		printf("NO");
	}
	return 0;
}
