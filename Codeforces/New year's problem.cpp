#include<stdio.h>
int function(int rem, int n);
int main(){
	int t,a,rem,n;
	scanf("%d",&t);
	while(t--){
		scanf("%d",&n);
		if(n!=2020&&n!=2021&&n<4040){
			printf("NO\n");
		}
		else{
		rem=n%10;
		a=rem*2021;
		a=n-a;
		if(a%2020==0){
			printf("YES\n");
		}
		else{
		        rem=rem+10;
		        function(rem,n);//20210
		}
	}
	}
	return 0;
}
int function(int rem, int n){
	int a;
	a=rem*2021;
	if(a>n){
		printf("NO\n");
	}
	else{
	          a=n-a;
		if(a%2020==0){
		printf("YES\n");
		}
		else{
		rem=rem+10;
		function(rem,n);
		}
	}
}
