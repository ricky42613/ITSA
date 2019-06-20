#include<iostream>
#include<vector>
#include<cfloat>
#include<cstdio>
#include <queue> 
#include <cmath>
#include<cctype>
#include<cstring>
using namespace std;

int main(){
	char s[1024];
	int a[100],i=0,j=0,tmp=0;
	while(scanf("%s",s)!=EOF){
		a[0]=0;
		j=0;
		if(s[0]==48&&strlen(s)==1) break;
		for(i=0;i<strlen(s);i++){
			if(48<=s[i]&&s[i]<=57){
				a[j]=s[i]-48;
				j++;
			}
			else{
				if(s[i]=='+') tmp=a[j-2]+a[j-1];
				if(s[i]=='-') tmp=a[j-2]-a[j-1];
				if(s[i]=='*') tmp=a[j-2]*a[j-1];
				if(s[i]=='/') tmp=a[j-2]/a[j-1];
				if(s[i]=='%') tmp=a[j-2]%a[j-1];
				a[j-1]=0;
				a[j-2]=tmp;
				j--;
			}
		}
	//	printf("%d\n",a[0]);
		cout<<a[0]<<endl;
	}
}
