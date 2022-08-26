#include<stdio.h>
int main(){
	int m,n,p,count=0,i;
	scanf("%d%d",&m,&n);
	p=m*n;
	for(i=2;i<=p;i=i+2){
		count++;
	}
	printf("%d",count);
	return 0;
}
