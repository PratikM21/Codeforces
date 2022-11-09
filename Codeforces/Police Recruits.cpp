#include<stdio.h>
int main(){
	int n,a[100000],count=0,r,i;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++){
		if(a[i]<0){
			count++;
		}
		else if(a[i]>0){
			r=i+a[i];
			for(i=i;i<r;i++){
				if(a[i+1]<0){
					continue;
				}
				else{
					r=r+a[i+1]+1;
				}
			}
		}
	}
	printf("%d",count);
	return 0;
}
