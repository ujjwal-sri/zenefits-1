#include <stdio.h>
#include <math.h>
#include<string.h>
int factorial(int a);
int main(){
        int i,n,j,count=0,k=0,l=0;
        scanf("%d",&n);
        char letrss[10000];
        for(i=0;i<n;i++)
        {
            scanf("%c",letrss[i]);
        }
        char reqrd[10000];
        scanf("%s",&reqrd);
        int facti = factorial(n);
        // defined char var
        char name[facti][n];
        for(i=0;i<facti;i++){
            for(j=i+1;j<n;j++){
                if(letrss[i]<=letrss[j]){
                name[k][l]=letrss[i];
                }
                else{
                    name[k][l]=letrss[j];
                }
                l++;
            }
            k++;l=0;
            if(k==facti) break;
        }
        for(i=0;i<facti;i++){
            if(strcmp(name[i],reqrd)==0){
                printf("%d",i+1);
                break;
            }
        }
    return 0;
}
int factorial(int a){
    if(a==0) return 1;
    else return (a*factorial(a-1));

}
