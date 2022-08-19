#include<stdio.h>
int main(){
	
	int a[1500],n,h,i,over=0,under=0,total;
	scanf("%d",&n);
	scanf("%d",&h);
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++){
		if(a[i]>h){
			over=over+2;
		}
		else{
			under=under+1;
		}
	}
	total=over+under;
	printf("%d",total);
	return 0;
}
