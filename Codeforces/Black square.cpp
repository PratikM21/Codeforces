#include<stdio.h>
#include<string.h>
int main(){
	int sum=0,i,a[101];
	char s[100001];
	for(i=0;i<4;i++){
		scanf("%d",&a[i]);
	}
	scanf("%s",&s);
	for(i=0;i<strlen(s);i++){
		if(s[i]=='1'){
			sum=sum+a[0];
		}
		else if(s[i]=='2'){
			sum=sum+a[1];
		}
		else if(s[i]=='3'){
			sum=sum+a[2];
		}
		else if(s[i]=='4'){
			sum=sum+a[3];
		}
	}
	printf("%d",sum);
	return 0;
}
