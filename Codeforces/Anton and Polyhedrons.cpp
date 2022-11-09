#include<stdio.h>
int main(){
	long long int n,i,sum=0;
	char s[1000];
	scanf("%lld",&n);
	for(i=0;i<n;i++){
		scanf("%s",&s);
		if(s[0]=='T'){
			sum=sum+4;
		}
		else if(s[0]=='C'){
			sum=sum+6;
		}
		else if(s[0]=='O'){
			sum=sum+8;
		}
		else if(s[0]=='D'){
			sum=sum+12;
		}
		else if(s[0]=='I'){
			sum=sum+20;
		}
	}
	printf("%lld",sum);
	return 0;
}
