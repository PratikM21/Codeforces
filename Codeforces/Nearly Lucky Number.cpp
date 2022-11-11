#include<stdio.h>
#include<string.h>
int main(){
	int n=0,i,len;
	char s[100];
	scanf("%s",s);
	len=strlen(s);
	for(i=0;i<len;i++){
		if(s[i]==52||s[i]==55){
			n++;
		}
	}
		if(n==4||n==7){
			printf("YES");
		}
		else{
			printf("NO");
		}
	
	return 0;
}
