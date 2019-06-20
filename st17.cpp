#include<iostream>
#include<vector>
#include<cfloat>
#include<cstdio>
#include <queue> 
#include <cmath>
#include<cstring>
#include<cctype>
using namespace std;
int main(){
	int i=0,n=0,a1=0,a2=0,b1[100],b2[100],m=0,sum1=0,sum2=0,j=0,k=1;
	char hex[1024];
	//scanf("%d",&n);
	cin>>n;
	for(i=0;i<n;i++){
		sum1=0;
		sum2=0;
		a2=0;
		k=1;
		cin>>a1;
//		scanf("%d",&a1);
		sprintf(hex,"%d",a1);
		for(j=strlen(hex);j>0;j--){
			a2+=(hex[j-1]-48)*k;
			k=k*16;
		}
		for(m=0;a1>0;m++){
			b1[m]=a1%2;
			if(b1[m]==1) sum1++;
			a1=a1/2;
		}
		for(m=0;a2>0;m++){
			b2[m]=a2%2;
			if(b2[m]==1) sum2++;
			a2=a2/2;
		}
		//printf("%d %d\n",sum1,sum2);
		cout<<sum1<<sum2;
	}
	return 0;
}
