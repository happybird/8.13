#include <stdio.h>

int main(int argc, const char *argv[])
{
    int i;
    int *p;
    p = &i;
    i = 1;
    printf("0x%x\n",&i);
    printf("%d\n",*p);
    return 0;
}
