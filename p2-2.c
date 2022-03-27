#include <stdio.h>
void print1(int *ptr, int rows); // 배열요소의 주소와 값 출력하는 함수 print1 선언
int main()
{
    printf("[----- [이찬] [2019038029] -----]\n");
    int one[] = {0, 1, 2, 3, 4}; //int형 크기가 5인 배열 one 선언
    printf("one = %p\n", one);   //배열의 이름 one = &one[0], 그값을 출력
    printf("&one = %p\n", &one); //배열의 주소 = 배열의 시작주소 = &one[0]
    printf("&one[0] = %p\n", &one[0]); //&one[0] 출력
    printf("\n");
    print1(&one[0], 5); // print1 함수 호출
    //함수의 인수로 배열의 주소를 보내줌 = call by reference , + 배열크기
    return 0;
}
void print1(int *ptr, int rows) // 배열 one을 포인터 변수ptr로 받아옴
{ /* print out a one-dimensional array using a pointer */
    //ptr도 배열처럼 사용가능 &ptr[i]= (ptr+i) 
    int i;
    printf("Address \t Contents\n");
    for (i = 0; i < rows; i++) //rows는 받아온 배열크기
        printf("%p \t %5d\n", ptr + i, *(ptr + i)); 
        //받아온 배열요소들의 주소값 , 값 출력
    printf("\n");
}