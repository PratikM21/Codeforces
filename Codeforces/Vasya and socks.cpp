#include<stdio.h>
int main(){
	int n,m,i,s=0,temp;
	scanf("%d%d",&n,&m);
	temp=n;
              for(i=1;i<=n;i++){
		s++;
		if(s>=m){
		if(s%m==0){
			s++;
		}
	       }
	}
	printf("%d",s);

	
	return 0;
}
