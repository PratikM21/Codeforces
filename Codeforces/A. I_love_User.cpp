#include<stdio.h>
int main(){
	int n,a[1000],i,j,count=0,flag=0;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	for(i=1;i<n;i++){
		count=0;
		for(j=0;j<i;j++){
			if(a[j]>a[i]){
				count++;
				if(count==i){
					flag++;
				}
			}
		}
		count=0;
		for(j=0;j<i;j++){
			if(a[j]<a[i]){
				count++;
				if(count==i){
					flag++;
				}
			}
		}
	}
	printf("%d",flag);
	return 0;
}
