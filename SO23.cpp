#include<iostream>
#include<vector>
#include<cfloat>
#include<cstdio>
#include <queue> 
#include <cmath>
#include<cctype>
#include<cstring>
using namespace std;

int cmp(const void *a, const void *b){
    int *p1 = (int *)a;
    int *p2 = (int *)b;
    if (*p1 > *p2)
        return 1;
    else if (*p1 < *p2)
        return -1;
    else
        return 0;
}

int main(){
    int ncase,i,n,tmp,sum;
   // scanf("%d",&ncase);
    cin>>ncase;
    while(ncase--){
        //scanf("%d",&n);
        cin>>n;
        int job[n];
        for(i=0;i<n;i++)
            cin>>job[i];
			//scanf("%d",&job[i]);
        qsort(job,n,sizeof(int),cmp);
        tmp = sum = 0;
        for(i=0;i<n;i++){
            sum += tmp;
            tmp += job[i];
        }
        //printf("%d\n",sum);
        cout<<sum<<endl;
    }
    return 0;
}
