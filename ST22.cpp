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
    int ncase,d1,d2,i,len,tmp;
    char n[20],n2[20];
   // scanf("%d",&ncase);
    cin>>ncase;
    while(ncase--){
     //   scanf("%s %s",n,n2);
        cin>>n>>n2;
        len = strlen(n);
        tmp = 1;
        d1 = d2 = 0;
        for(i=len-1;i>=0;i--){
            if (n[i] == '1')
                d1 += tmp;
            tmp *= 2;
        }
        len = strlen(n2);
        tmp = 1;
        for(i=len-1;i>=0;i--){
            if (n2[i] == '1')
                d2 += tmp;
            tmp *= 2;
        }
        //printf("%d\n",d1+d2);
        cout<<d1+d2<<endl;
    }
    return 0;
}
