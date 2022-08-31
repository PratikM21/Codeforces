#include<stdio.h>
int main(){
	long int g,a=0,d=0,i;
	char s[100000];
	scanf("%ld",&g);
	scanf("%s",&s);
	for(i=0;i<g;i++){
		if(s[i]=='A'){
			a++;
		}
		else if(s[i]=='D'){
			d++;
		}
	}
	if(a>d){
		printf("Anton");
	}
	else if(a<d){
		printf("Danik");
	}
	else{
		printf("Friendship");
	}
	return 0;
}
