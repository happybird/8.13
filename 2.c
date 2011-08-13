#include <stdio.h>

int main(int argc, const char *argv[])
{
    int i = 1;
    int *p;
    p = &i;
    char *pc;
    pc = p;/*assign a pointer to int to pointer  to a char,it brings a warning ,but it is safe,because a all pointer type have 32 bit space*/
    printf("0x%x\n",pc);
    printf("0x%x\n",pc+1);
    printf("0x%x\n",pc+2);
    printf("0x%x\n",pc+3);
    printf("%d\n",*pc);
    printf("%d\n",*(pc+1));
    printf("%d\n",*(pc+2));
    printf("%d\n",*(pc+3));
    int j = 0;
    return 0;
}
