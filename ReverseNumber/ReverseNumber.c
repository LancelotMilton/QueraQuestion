#include <stdio.h>

int main (int argc, char *argv[])
{
    int n=0,reverse=0,rem;
    scanf("%d",&n);
    int o=n;
    while(n!=0){
        rem=n%10;
        reverse=reverse*10+rem;
        n/=10;
    }
    if(o==reverse){
        printf("YES\n");
    }
    else {
        printf("NO\n");
    }
    return 0;
}
