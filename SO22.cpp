#include<iostream>
#include<vector>
#include<cfloat>
#include<cstdio>
#include <queue> 
#include <cmath>
#include<cctype>
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
    int ncase,n,i;
    //scanf("%d",&ncase);
    cin>>ncase;
    while(ncase--){
        //scanf("%d",&n);
        cin>>n;
        int arr[n];
        for(i=0;i<n;i++)
            //scanf("%d",&arr[i]);
            cin>>arr[i];
        qsort(arr,n,sizeof(int),cmp);
        for(i=0;i<n;i++)
            cout<<arr[i];
			//printf("%d",arr[i]);
        //printf("\n");
        cout<<endl;
        for(i=n-1;i>=0;i--)
            //printf("%d",arr[i]);
            cout<<arr[i];
        //printf("\n");
        cout<<endl;
    }
    return 0;
}
