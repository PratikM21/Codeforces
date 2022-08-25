#include<stdio.h>
int main(){
	int n,a[150],i;
	float volume,total=0;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
		total=total+a[i];
	}
	volume=total/n;
	printf("%.12f",volume);
	return 0;
	
}
