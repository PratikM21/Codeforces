#include<stdio.h>
int main(){
	int n,p,q,a[150],b[150],c[500],i,j,size,count=1;
	scanf("%d",&n);
	scanf("%d",&p);
	for(i=0;i<p;i++){
		scanf("%d",&a[i]);
	}
	scanf("%d",&q);
	for(i=0;i<q;i++){
		scanf("%d",&b[i]);
	}
	size=p+q;
	for(i=0;i<p;i++){
		c[i]=a[i];
	}
	for(i=0;i<q;i++){
		c[i+p]=b[i];
	}
	
	for(i=0;i<size;i++){
		if(c[i]==count){
			count++;
			i=-1;		
		}		
	}
	if(count==n+1){
		printf("I become the guy.");
	}
	else{
		printf("Oh, my keyboard!");
	}
	return 0;
}
