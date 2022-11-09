#include<stdio.h>
#include<stdlib.h>
int main (){
	int t,a[101],count=0,n,j,i,r,temp;
	scanf("%d",&t);
	while(t>0){
			scanf("%d",&n);
			for(i=0;i<n;i++){
				scanf("%d",&a[i]);
			}
		 for(i=0;i<n;i++){
            for (j=i+1;j<n;j++){
                if(a[i]>a[j]){
                 temp=a[i];
                 a[i]=a[j];
                 a[j]=temp;
            }
        }
    }
			for(i=0;i<n;i++){
				for(j=i+1;j<n;j++){
					r=abs(a[i]-a[j]);
					if(r<=1){
						count++;
						break;
					}
					else{
						break;
					}
				}		
			}
		t--;
		if(count==n-1){
		printf("YES\n");
	}
	else{
		printf("NO\n");
	}
	count=0;
}
	return 0;
}

