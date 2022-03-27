#include <stdio.h>
#include <stdlib.h>
void main()
{
    printf("[----- [이찬] [2019038029] -----]\n");
    //32비트 컴파일러minG사용하여 진행됨
    int **x; //이중포인터 변수 x 선언
    printf("sizeof(x) = %lu\n", sizeof(x));
    // x =  포인터를 가리키는 포인터의 크기= 32비트 주소를 받을 공간 = 4바이트 
    printf("sizeof(*x) = %lu\n", sizeof(*x));
    // *x = int형 공간을 가리키는 포인터의 크기 = 32비트 주소를 받을공간 =4바이트
    printf("sizeof(**x) = %lu\n", sizeof(**x));
    // 실제 int형 값이 들어갈 저장 공간 = int의 크기 4바이트

    //64비트 컴파일러 에서는 주소를 받을 공간 64비트 = 8바이트이기때문에
    //포인터의 크기가 8바이트 로 출력됨
}