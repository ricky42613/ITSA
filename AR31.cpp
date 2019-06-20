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
    char str[100],tmp[50];
    char *ptr,c;
    int i,len,flag;
    while(fgets(str,100,stdin) != NULL){
        str[strlen(str)] = '\0';
        ptr = str;
        ptr = strtok(ptr," ");
        flag = 0;
        while(ptr != NULL){
            strcpy(tmp,ptr);
            len = strlen(tmp);
            c = ' ';
            for(i=len-1;i>=0;i--){
                if (tmp[i] == '\n')
                    flag = 1;
                if (tmp[i] == ',' || tmp[i] == '.'){
                    c = tmp[i];
                    continue;
                }
                if (islower(tmp[i]))
                    tmp[i] = toupper(tmp[i]);
                else if (isupper(tmp[i]))
                    tmp[i] = tolower(tmp[i]);
                if (isalnum(tmp[i]) || tmp[i] == '_' || tmp[i] == 39)
                	cout<<tmp[i];
//                    printf("%c",tmp[i]);
            }
            ptr = strtok(NULL," ");
            if (c == ',' || c == '.'){
                if(ptr == NULL)
                	cout<<c;
//                    printf("%c",c);
                else
                	cout<<c;
//                    printf("%c ",c);
            }
            else
            	cout<<c;
//                printf("%c",c);
            if (flag)
            	cout<<endl;
//                printf("\n");

        }
        memset(str,'\0',sizeof(str));
    }
    return 0;
}
