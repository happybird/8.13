#include <stdio.h>
void exchange_nu(int *,int *);
int main(int argc, const char *argv[])
{
    int a = 0;
    int b = 0;
    scanf("%d,%d",&a,&b);
    exchange_nu(&a,&b);
    printf("a = %d,b = %d",a,b);
    return 0;
}

void exchange_nu(int *x,int *y)
{
    int z;
    z = *y;
    *y = *x;
    *x = z;
}
