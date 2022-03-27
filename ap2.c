#include <stdio.h>
#include <stdlib.h>
void main()
{
    int list[5];  //int형 배열 list 선언
    int *plist[5]; //5개의 int형 포인터변수를 저장할수있는 포인터 배열 plist 선언

    list[0] = 10; //list[0] 값 초기화
    list[1] = 11; //list[1] 값 초기화

    plist[0] = (int *)malloc(sizeof(int)); //plist[0]에 들어갈 주소값을 위한 메모리를 힙영역에 동적할당
    printf("[----- [이찬] [2019038029] -----]\n");
    printf("list[0] \t= %d\n", list[0]); //list[0] 값 = 0 출력
    printf("address of list \t= %p\n", list);//list는 배열이름,list[0]을 가리킴,배열의 시작주소값=&list[0] 출력
    printf("address of list[0] \t= %p\n", &list[0]); //배열의시작주소값=&list[0] 출력
    printf("address of list + 0 \t= %p\n", list + 0);//list+0 = list 이므로 배열의 시작주소값 출력
    printf("address of list + 1 \t= %p\n", list + 1);//list(배열시작주소) + 1(int형 배열이므로 1칸 =4바이트) = &list[1] 출력
    printf("address of list + 2 \t= %p\n", list + 2);//list(배열시작주소) + 2(int형 배열이므로 2칸 =8바이트) = &list[2] 출력
    printf("address of list + 3 \t= %p\n", list + 3);//list(배열시작주소) + 3(int형 배열이므로 3칸 =12바이트) = &list[3] 출력
    printf("address of list + 4 \t= %p\n", list + 4);//list(배열시작주소) + 4(int형 배열이므로 4칸 =16바이트) = &list[4] 출력
    printf("address of list[4] \t= %p\n", &list[4]); //&list[4] = list[4]의 시작주소값출력
    
    free(plist[0]); // plist[0] 동적 메모리 해제
}