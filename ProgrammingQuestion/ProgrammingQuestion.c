#include <stdio.h>
struct string {
    char d[1000];
};

int main (int argc, char *argv[])
{
    struct string s[10];
    int i;
    scanf("%d",&i);
    for(int j=0;j<i;j++){
        scanf("%s",s[j].d);
    }
    for(int j=i-1;j>=0;j--){
        printf("%s ", s[j].d);
    }
    return 0;
}
