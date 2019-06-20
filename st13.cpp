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
	int table[26],l=0,i=0,tmp=0,j=0,tartab[26];
	char sample[1024],target[1000][1024];
	for(i=0;i<26;i++){
		table[i]=0;
		tartab[i]=0;
	}
//	scanf("%s",sample);
	cin>>sample;
	for(i=0;i<strlen(sample);i++){
		tmp=tolower(sample[i])-97;
		table[tmp]++;
	}
//	scanf("%d",&l);
	cin>>l;
	for(i=0;i<l;i++){
//		scanf("%s",target[i]);
		cin>>target[i];
	}
	for(i=0;i<l;i++){
		for(j=0;j<26;j++)	tartab[j]=0;
		if(strlen(sample)==strlen(target[i])){
			for(j=0;j<strlen(target[i]);j++){
				tmp=tolower(target[i][j])-97;
				tartab[tmp]++;
			}
			for(j=0;j<26;j++){
				if(tartab[j]!=table[j]) break;
				else{
					if(j==25) cout<<target[i]<<endl;//printf("%s\n",target[i]);
				}
			}
		}
	}
}
