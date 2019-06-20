#include<iostream>
#include<vector>
#include<cfloat>
#include<cstdio>
#include <queue> 
#include <cmath>
#include<cctype>
using namespace std;
int main(){
	char str[1024],*ptr=NULL,c='\0';
	int sum=0,i=0,n=0,tmp=0,flag=0;
	cin>>n;
	//scanf("%d",&n);
	for(i=0;i<n;i++){
		cin>>str;
		//scanf("%s",str);
		sum=0;
		ptr=str;
		flag=0;
		while(*ptr!=61){
			if(48<=*ptr&&*ptr<=57){
				tmp=atoi(ptr);
				if(flag==0){
					sum=tmp;
					flag=1;
				}
				else{
					if(c=='+') sum+=tmp;
					else sum-=tmp;
				}
				while(48<=*ptr&&*ptr<=57) ptr++;
			}
			else{
				if(flag==0){
					sum=0;
					flag=1;
				}
				c=*ptr;
				ptr++;
			}
		}
//		if(i!=n-1)
		//	printf("%d\n",sum);
			cout<<sum<<endl;
//			else printf("%d",sum);
	}
	return 0;
}
