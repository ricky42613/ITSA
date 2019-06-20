#include<iostream>
#include<vector>
#include<cfloat>
#include<cstdio>
#include <queue> 
#include <cmath>
#include<cctype>
using namespace std;
int main(){
    char str[1024];
    int i,len,tmp,ans;
    while(fgets(str,1024,stdin) != NULL){
        str[strlen(str)-1] = '\0';
        len = strlen(str);
        tmp = 26;
        ans = str[len-1] - 'A' +1;
        for(i=len-2;i>=0;i--){
            ans += (str[i]-'A'+1) * tmp;
            tmp = tmp * tmp;
        }
        //printf("%d\n",ans);
        cout<<ans<<endl;
    }
    return 0;
}
