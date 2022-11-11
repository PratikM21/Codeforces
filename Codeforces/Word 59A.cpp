#include<stdio.h>
#include<string.h>
int main(){
	int len,i,lwr=0,upr=0;
	char s[10000];
	scanf("%s",s);
	len =strlen(s);
	for(i=0;i<len;i++){
		if(s[i]>=97&&s[i]<=122){
			lwr++;
		}
		else if(s[i]>=65&&s[i]<=90){
			upr++;
		}
	}
	if(lwr>upr||lwr==upr){
		printf("%s",strlwr(s));
	}
	else {
		printf("%s",strupr(s));
	}
	return 0;
}
