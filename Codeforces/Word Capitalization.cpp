#include<stdio.h>
int main(){
	char c[1001];
	gets(c);
	if(c[0]>=97&&c[0]<=122){
		c[0]=c[0]-32;
	}
	puts(c);
	return 0;
}
