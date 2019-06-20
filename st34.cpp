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
	char str[1024];
	int i=0,tab[26],a=0;
	//scanf("%s",str);
	cin>>str;
	for(i=0;i<26;i++) tab[i]=0;
	for(i=0;i<strlen(str);i++){
		if(isalpha(str[i])){
			a=tolower(str[i])-97;
			tab[a]++;
		}
	}
	for(i=0;i<25;i++) cout<<tab[i]<<endl;//printf("%d\n",tab[i]);
	//printf("%d\n",tab[i]);
	cout<<tab[i]<<endl;
	return 0;
}
