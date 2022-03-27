#include <stdio.h>
struct student //구조체 이름 student인 구조체 정의
{
    char lastName[13]; /* 13 bytes */
    int studentId;     /* 4 bytes */
    short grade;       /* 2 bytes */
};
int main()
{
    struct student pst; //구조체 변수 pst 선언
    printf("[----- [이찬] [2019038029] -----]\n");
    printf("size of student = %ld\n", sizeof(struct student)); 
    //구조체sutdent의 크기 출력, 19바이트가 나올것을 예상했으나, 패딩으로 인해 24바이트가 됨 
    printf("size of int = %ld\n", sizeof(int));    //int자료형의 크기 출력
    printf("size of short = %ld\n", sizeof(short));//short자료형의 크기출력
    return 0;
}