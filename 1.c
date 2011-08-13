#include <stdio.h>

int main(int argc, const char *argv[])
{
    int i = 1;
    char c = 1;
    int *p1;
    p1 = &i;
    char *p2;
    p2 = &c;
    printf("0x%x\n",&i);
    printf("%d\n",*p1);
    *p1 = 2;
    printf("%d",i);
    printf("0x%x\n",p1);
    printf("0x%x\n",p1 + 1);
    printf("0x%x\n",p2);
    printf("0x%x\n",p2+1);
    return 0;
}
