#include<stdio.h>
int main(){
    long long	int n,a[150000],i,j=0,count=0;
	scanf("%lld",&n);
	for(i=0;i<n;i++){
		scanf("%lld",&a[i]);
	}
	for(i=0;i<n;i=j){
		for(j=i+1;j<=n;j++){
			if(a[i]!=a[j]){
				count++;
				break;
			}
		}
	}
	printf("%lld",count);
	return 0;
}
