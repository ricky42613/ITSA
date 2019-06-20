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
    int i,j,poly[50],tmp[50],a,b,c,d;
    //scanf("%d %d %d %d",&a,&b,&c,&d);
    cin>>a>>b>>c>>d;
    for (i=0;i<50;i++)
        poly[i] = 1;
    for (i=0;i<d;i++){
        for (j=0;j<50;j++)
            tmp[j] = 0;
        for (j=49;j>=(49-2*i);j--){
            tmp[j] += poly[j]*c;
            tmp[j-1] += poly[j]*b;
            tmp[j-2] += poly[j]*a;
        }
        for (j=0;j<50;j++)
            poly[j] = tmp[j];
    }
    for (i=49-2*d;i<49;i++)
//        printf("%d ",poly[i]);
		cout<<poly[i];
//    printf("%d\n",poly[49]);
	cout<<poly[49]<<endl;
    return 0;
}
