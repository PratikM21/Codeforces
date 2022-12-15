#include<stdio.h>
#include<string.h>
int main(){
	char s[1000];
	gets(s);
	int l,i;
	l=strlen(s);
	for(i=0;i<l;i++){
		if(s[i]=='W'&&s[i+1]=='U'&&s[i+2]=='B'){
			s[i]=' ';
		          s[i+1]=' ';
			s[i+2]=' ';
		}
	}
	puts(s);
	return 0;
}
