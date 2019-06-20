#include<iostream>
#include<vector>
#include<cfloat>
#include<cstdio>
#include <queue> 
#include <cmath>
#include<cstring>
using namespace std;
void swap(char *str,int i, int j){
     char tmp;
     tmp = str[i];
     str[i] = str[j];
     str[j] = tmp;
} 

int next_permutation(char *str)
{
     int i, j, k;
     int length;
     length = strlen(str);
     for(i = length - 1;i > 0 ; --i)
      if(str[i - 1] < str[i]) break;
     j = i;
     if(j == 0) return 0;
     for(i = length - 1;i > 0; --i)
      if(str[j - 1] < str[i]) break;
     k = i;
     swap(str,j - 1, k);
     for(i = j, j = length - 1;i < j; ++ i, -- j)
      swap(str,i, j);
   return 1;
}

int main(){
	int n=0,i=0,j=0,m=0,h=0;
	char str[1024];
	//scanf("%d",&n);
	cin>>n;
	for(i=0;i<n;i++){
		memset(str,'\0',sizeof(str));
		cin>>m>>h;
		//scanf("%d%d",&m,&h);
		for (j = 0; j < m; j ++){
    		if (j < m - h) str[j] = '0';
    		else str[j] = '1';
		}
		str[m] = '\0';
		//printf("%s\n", str);
		cout<<str<<endl;
		while (next_permutation(str)){
    		//printf("%s\n", str);
    		cout<<str<<endl;
		}
		if(i!=n-1)cout<<endl;
	}
}
