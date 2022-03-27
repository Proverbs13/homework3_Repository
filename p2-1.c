#include <stdio.h>
#define MAX_SIZE 100
float sum(float[], int); //배열요소의 합을 구하는 함수sum 선언
float input[MAX_SIZE], answer; //float형 배열 input (100칸), float형 변수 answer 선언
int i; //반복문사용을 위한 변수 i
void main(void)
{
    printf("[----- [이찬] [2019038029] -----]\n");
    for (i = 0; i < MAX_SIZE; i++) //100번 반복
        input[i] = i; //배열 input[i]의 값 = i로 초기화
    /* for checking call by reference */
    printf("address of input = %p\n", input); // 배열이름 = 배열의 시작주소값 출력
    answer = sum(input, MAX_SIZE); //sum 함수 호출해 리턴값 answer에 초기화
    //함수의 인수로 배열의 주소를 보내줌 = call by reference , + 배열크기
    printf("The sum is: %f\n", answer); //answer 출력
}
float sum(float list[], int n) // input의 주소값을 list에 복사해서 가져옴,list는 포인터 
{                              // list를 배열처럼 사용할 수 있음, n은 배열의 크기
    printf("value of list = %p\n", list); // list = 배열input의 시작주소값 출력
    printf("address of list = %p\n\n", &list); 
    // 배열 주소 input을 받아온 포인터변수 list를 저장할 공간의 주소출력
    int i;
    float tempsum = 0;
    for (i = 0; i < n; i++)
        tempsum += list[i]; //input배열 요소들의 값의 합 구함
    return tempsum;         //그 값을 리턴해줌
}
