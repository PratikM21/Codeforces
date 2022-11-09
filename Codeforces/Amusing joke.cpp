#include<stdio.h>
#include<string.h>
int main(){
	char a[100],b[100],c[100];
	int count=0,flag=0;
	int x,y,z,i,j,r;
	scanf("%s %s %s",&a,&b,&c);
	x=strlen(c);
	y=strlen(b);
	z=strlen(a);
	r=x;
	for(i=0;i<z;i++){
		for(j=0;j<x;j++){
			if(a[i]==c[j]){
				count++;
				for(j=j;j<x-1;j++){
					c[j]=c[j+1];
				}
				x--;
				break;
			}
		}
	}
	for(i=0;i<y;i++){
		for(j=0;j<x;j++){
			if(b[i]==c[j]){
				flag++;
				for(j=j;j<x-1;j++){
					c[j]=c[j+1];
				}
				x--;
				break;
			}
		}
	}
	
	if(count==z&&flag==y&&y+z==r){
		printf("YES");
	}
	else{
		printf("NO");
	}
	return 0;
}
