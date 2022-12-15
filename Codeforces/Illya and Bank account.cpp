#include<stdio.h>
int main(){
	long long int a,k,k2,r;
	scanf("%lld",&a);
	if (a>=0){
		printf("%d",a);
	           return 0; 
	}
	else{
	k=a/10;
	r=a%10;
	k2=(k/10)*10+r;
	if(k2<k){
		printf("%lld",k);
	}
	else{
		printf("%lld",k2);
	}
}
	return 0;

}
