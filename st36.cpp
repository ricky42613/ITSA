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
	char str[10240],*ptr;
	int flag=0;
	while(fgets(str,10240,stdin)!=NULL){
		if(strstr(str,"Tel:")!=NULL){
			flag=1;
			ptr=strstr(str,"Tel:");
			ptr=ptr+4;
			while(*ptr==45||(48<=*ptr&&*ptr<=57)){
				//printf("%c",*ptr);
				cout<<*ptr;
				ptr++;
			}
		}
	}
	if(flag==0) cout<<"N/A";//printf("N/A");
	cout<<endl;
	return 0;
}
