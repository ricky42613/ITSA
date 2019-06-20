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
	int i=0,j=0;
	float stack[100],tmp=0;
	while(scanf("%s",s)!=EOF){
		j=0;
		stack[0]=0;
		for(i=strlen(s);i>0;i--){
			if(s[i-1]>=48&&s[i-1]<=57){
				stack[j]=(float)s[i-1]-(float)48;
				j++;
			}
			else{
				if(s[i-1]==36){
					tmp=(stack[j-2]+stack[j-1])/2;
					stack[j-2]=tmp;
					stack[j-1]=0;
					j--;
				}
				if(s[i-1]==37){
					tmp=(stack[j-1]-stack[j-2])/2;
					stack[j-2]=tmp;
					stack[j-1]=0;
					j--;
				}
			}
		}
	//	printf("%f\n",stack[0]);
		cout<<stack[0]<<endl;
	}
	return 0;
} 
