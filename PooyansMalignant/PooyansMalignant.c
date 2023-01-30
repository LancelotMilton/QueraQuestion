#include <stdio.h>

int main (int argc, char *argv[])
{
    int n,m,i;
    scanf("%d%d",&n,&m);
    i=m;
    while((i % n)>n/2){
        i += m;
    }
    printf("%d",i);
    return 0;
}
