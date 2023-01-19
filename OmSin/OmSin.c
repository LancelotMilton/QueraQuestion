#include <stdio.h>
#include <stdlib.h>
int main (int argc, char *argv[])
{
    int n;
    scanf("%d",&n);
    int i;
    for(i=0;i<n;i++){
        char randomletter1 = "abcdefghijklmnopqrstuvwxyz"[random () % 26];
        char randomletter2 = "abcdefghijklmnopqrstuvwxyz"[random () % 26];
        char randomletter3 = "abcdefghijklmnopqrstuvwxyz"[random () % 26];
        printf("s%c%c%c\n",randomletter3,randomletter1,randomletter2);
    }
    return 0;
}
