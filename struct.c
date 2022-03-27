#include <stdio.h>
struct student1 //구조체 student1 정의
{
    char lastName;
    int studentId;
    char grade;
};
typedef struct //typedef를 이용한 구조체 정의
{
    char lastName;
    int studentId;
    char grade;
} student2;  //구조체 별칭 student2
int main()
{
    printf("[----- [이찬] [2019038029] -----]\n");
    struct student1 st1 = {'A', 100, 'A'}; //student1 구조체변수 st1 선언,초기화
    printf("st1.lastName = %c\n", st1.lastName);  //st1의 lastName 출력
    printf("st1.studentId = %d\n", st1.studentId);//st1의 studentId 출력
    printf("st1.grade = %c\n", st1.grade);        //st1의 grade 출력

    student2 st2 = {'B', 200, 'B'}; //student2 구조체변수 st2 선언,초기화 
    //별칭을 사용해 struct를 안써줘도 됨
    printf("\nst2.lastName = %c\n", st2.lastName);//st2의 lastName 출력
    printf("st2.studentId = %d\n", st2.studentId);//st2의 studentId 출력
    printf("st2.grade = %c\n", st2.grade);        //st2의 grade 출력

    student2 st3; //student2 구조체변수 st3 선언
    st3 = st2;    //구조체 st2각 요소의 값을 st3 각 요소에 대입해줌
    printf("\nst3.lastName = %c\n", st3.lastName);//st2와 같은 값 출력됨
    printf("st3.studentId = %d\n", st3.studentId);
    printf("st3.grade = %c\n", st3.grade);
    /* equality test */
    //if (st3 == st2) /* not working */ //오류 발생
    //    printf("equal\n");
    //else
    //    printf("not equal\n");
    //C언어의 구조체에서는 같은타입이라고 해도 직접비교 X
    //위의 주석처리한 코드는 오류가 뜸, 직접비교를 위해선 구조체의 요소들끼리 비교 해야함 
    return 0;
}
