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
    char str[300];
    int i,len,flag,flag2;
    while(fgets(str,300,stdin) != NULL){
        len = strlen(str);
        flag2 = flag = 0;
        for(i=0;i<len;i++){
            if(isdigit(str[i])){
                if(str[i] == '0' && flag == 0){
                    flag2 = 1;
                    continue;
                }
                cout<<str[i];
                //printf("%c",str[i]);
                flag = 1;
            }
        }
        if(flag2 == 1 && flag == 0)
            //printf("0");
            cout<<0;
        else if (flag == 0)
            //printf("-1");
            cout<<-1;
        cout<<endl;
    }
    return 0;
}
