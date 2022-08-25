#include<stdio.h>
int main(){
	
    long long	int a,count=0;
	scanf("%lld",&a);
	while(a>0){
	if(a>=5){
		a=a-5;
		count++;
	}
	else if(a>=4){
		a=a-4;
		count++;
	}
	else if(a>=3){
		a=a-3;
		count++;
	}
		else if(a>=2){
		a=a-2;
		count++;
	}
		else if(a>=1){
		a=a-1;
		count++;
	}
}
	printf("%lld",count);
	return 0;
}
