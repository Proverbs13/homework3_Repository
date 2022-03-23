#include <stdio.h>
#include <stdlib.h>
void main()
{
    //32비트 컴파일러minG
    int **x;
    printf("sizeof(x) = %lu\n", sizeof(x));
    printf("sizeof(*x) = %lu\n", sizeof(*x));
    printf("sizeof(**x) = %lu\n", sizeof(**x));
}