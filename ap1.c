#include <stdio.h>
#include <stdlib.h>
void main()
{
    int list[5]; // int 형 배열 list 선언
    int *plist[5] = { NULL,  }; //5개의 int형 포인터변수를 저장할수있는 포인터 배열 선언,값은 NULL을 넣어줌

    plist[0] = (int *)malloc(sizeof(int)); //plist[0]에 들어갈 주소값을 위한 메모리를 힙영역에 동적할당
    list[0] = 1;  //list[0]의 값=1로 초기화
    list[1] = 100;//list[1]의 값=100으로 초기화

    *plist[0] = 200;//plist[0]은 메모리에서 값=200이 저장된 공간의 주소값을 가짐
    printf("[----- [이찬] [2019038029] -----]\n");
    printf("value of list[0] = %d\n", list[0]);   //list[0]의 값= 1 출력
    printf("address of list[0] = %p\n", &list[0]);//&list[0]의 주소값=배열의시작주소 출력
    printf("value of list = %p\n", list);         //배열의 이름은 배열 시작주소.위와 같은 값 출력
    printf("address of list (&list) = %p\n", &list);//말그대로 배열의 주소 = 시작주소 출력
    printf("----------------------------------------\n\n");
    printf("value of list[1] = %d\n", list[1]);      //list[1]의 값= 100 출력
    printf("address of list[1] = %p\n", &list[1]);   //&list[1]의 주소값=배열의시작주소+4(int크기) 출력
    printf("value of *(list+1) = %d\n", *(list + 1));//배열이름(list시작주소)+ 1(1칸=int형 4바이트) = &list[1] 이므로 
                                                     //  ㄴ list+1이 가리키는 값 100 출력
    printf("address of list+1 = %p\n", list + 1);    // 위의 설명에 따라 &list[1]과 같은 값 출력
    printf("----------------------------------------\n\n");
    printf("value of *plist[0] = %d\n", *plist[0]); //plist[0]가 가리키는 값 = 200 출력
    printf("&plist[0] = %p\n", &plist[0]);//힙 영역에 동적할당된 plist[0]의 값 저장된 주소 출력
    printf("&plist = %p\n", &plist); //배열의 시작주소=배열 첫번째 요소의 시작 주소  출력
    printf("plist = %p\n", plist);   //배열의 이름 = 배열의 시작주소  출력
    printf("plist[0] = %p\n", plist[0]); //plist[0]가 가리키는 메모리에서 값=200이 저장된 공간의 주소값 출력
    printf("plist[1] = %p\n", plist[1]); //
    printf("plist[2] = %p\n", plist[2]); //plist[1~4]는 NULL로 초기화 하여 0을 가리킴(아무것도 가리키지 않음)
    printf("plist[3] = %p\n", plist[3]); //
    printf("plist[4] = %p\n", plist[4]); //
    free(plist[0]); // plist[0] 동적 메모리 해제
}