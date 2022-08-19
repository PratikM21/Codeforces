#include<stdio.h>
int main(){
	int n,i,a[150],count=0;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++){
		count=0;
		if(a[i]==1){
			printf("Hard");
			break;
		}
		else{
			count++;
		}
	}
	if(count==1){
		printf("Easy");
	}
	return 0;
}
