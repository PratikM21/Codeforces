#include<stdio.h>
int main(){
	int a[101],n,temp,j,sum=0,i,half,coin=0,m;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
		sum=sum+a[i];
	}
	 for(i=0;i<n;i++){
            for (j=i+1;j<n;j++){
                if(a[i]<a[j]){
                    temp=a[i];
                    a[i]=a[j];
                    a[j]=temp;
                }
            }
        }
	half=sum/2;
	m=a[0];
	for(i=0;i<n;i++){
		if(m>half){
			coin++;
			break;
		}
		else{
			m=m+a[i+1];
			coin++;
			
		}
	}
	printf("%d",coin);
	return 0;
}
