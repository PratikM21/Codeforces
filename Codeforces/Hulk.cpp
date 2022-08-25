#include<stdio.h>
#include<string.h>
int main(){
	int n,temp;
	char s[]="I hate ",s1[]="that I love ", s2[]="it",s3[8000],s4[10]="that ";
	scanf("%d",&n);
	if(n==1){
		printf("I hate it");
		return 0;
	}
	else{
	strcpy(s3,s);
	while(n!=1){
		strcat(s3,s1);
		temp=n-1;
		n--;
		while(temp!=1){
			 
			 	strcat(s3,s4);
			 	strcat(s3,s);
			temp=1;
			n--;
		}
	}
}
strcat(s3,s2);
	printf("%s",s3);
	
		return 0;
}
