#include<stdio.h>
int main(){
	long long int t,n,a,o;
	scanf("%lld",&t);
	while(t--){
		scanf("%lld",&n);
		a=0;
		o=0;
		while(n%2==0){
			o=1;
			n=n/2;
			if(n==1){
		          break;
			}
			else if(n%2!=0){
				a=1;
				printf("YES\n");
				break;
			}
		}
		if(o==0){
		printf("YES\n");
		}
		else if(a==0){
		printf("NO\n");}
	}
	return 0;
}
