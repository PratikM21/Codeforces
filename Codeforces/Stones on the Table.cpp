#include<stdio.h>
#include<string.h>
int main(){
	int i,j,count=0,n;
	char s[100];
	scanf("%d",&n);
    scanf("%s",&s);	
	for(i=0;i<n;i++){
		for(j=i+1;j<n;j++){
			if(s[i]==s[j]){
				count++;
			}
			break;
		}	
	}
	printf("%d",count);
	return 0;
}
