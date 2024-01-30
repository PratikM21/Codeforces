#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--){                   
		int n,c=0,l=0,d,q[6];
		cin>>n;
		while(n!=0){
			int r;
			d=(n%10);
			if(d>0){
				c++;
				r=d*pow(10,l);
				q[c]=r;
			}
			if(r!=0){
			//cout << r << " ";
		}
			n=n/10;
			l++;
		}
		cout<<c<<endl;
		for(int i=1;i<=c;i++){
			printf("%d ",q[i]);
		}
	}
	return 0;
}
  

