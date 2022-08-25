#include<stdio.h>
int main(){
	int a[10],i,j,count=0;
	for(i=0;i<4;i++){
		scanf("%d",&a[i]);
	}
	for(i=0;i<4;i++){
		for(j=i+1;j<4;j++){
			if(a[i]==a[j]){
				count++;
				break;
			}
		}
	}
	printf("%d",count);
	return 0;
}
