#include <stdio.h>

int main(){
    int a, b,c, n,result;
    scanf("%d %d %d %d",&a,&b,&c,&n);
    result=a;
    for(int i = 2; i<=n; i++){
        result= result*b+c;
    }
    printf("%d",result);
}

