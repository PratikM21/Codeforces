#include<stdio.h>
int main(){
	int k,n,w,price=0,i,req;
	scanf("%d%d%d",&k,&n,&w);
	for(i=1;i<=w;i++){
		price=i*k+price;
	}
	req=price-n;
	if(req<0){
		printf("0");
	}
	else{
		printf("%d",req);
	}
	return 0;
}
