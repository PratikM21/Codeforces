#include<stdio.h>
int main()
{
	int n,a[1500],i,count=0,team=0;
	scanf("%d",&n);
	i=0;
	while(n!=0){
		for(i=0;i<3;i++){
		scanf("%d",&a[i]);
	  }
		for(i=0;i<3;i++){
			if(a[i]==1){
				count++;
			}
		}
		if(count>=2){
			team++;
		}
		count=0;
		n--;
	}
	printf("%d",team);
	return 0;
}
