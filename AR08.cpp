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
    int n=0,i,sum,ans;
    int num[150];
    while(scanf("%d",&num[n]) != EOF)
        n++;
    sum = ans = 0;
    for(i=0;i<n;i++){
        if(sum+num[i] >= 0){
            sum += num[i];
        }
        else
            sum = 0;
        if (ans < sum)
            ans = sum;
    }
//    printf("%d\n",ans);
    cout<<ans<<endl;
    return 0;
}
