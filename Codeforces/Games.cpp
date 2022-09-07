#include<stdio.h>
int main(){
	int n,a[1000],count=0,j,i;
	scanf("%d",&n);
	for(i=0;i<n*2;i++){
		scanf("%d",&a[i]);
	}
	for(i=0;i<n*2;i++){
	    if(i%2==0){
			j=i+3;
		}
		else if(i%2==1){
			j=i+1;
		}
		for(j=j;j<n*2;j=j+2){
			if(a[i]==a[j]){
				count++;
			}
		}
	}
	printf("%d",count);
	return 0;
}
