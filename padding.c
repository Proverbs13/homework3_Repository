#include <stdio.h>
struct student //����ü �̸� student�� ����ü ����
{
    char lastName[13]; /* 13 bytes */
    int studentId;     /* 4 bytes */
    short grade;       /* 2 bytes */
};
int main()
{
    struct student pst; //����ü ���� pst ����
    printf("[----- [����] [2019038029] -----]\n");
    printf("size of student = %ld\n", sizeof(struct student)); 
    //����üsutdent�� ũ�� ���, 19����Ʈ�� ���ð��� ����������, �е����� ���� 24����Ʈ�� �� 
    printf("size of int = %ld\n", sizeof(int));    //int�ڷ����� ũ�� ���
    printf("size of short = %ld\n", sizeof(short));//short�ڷ����� ũ�����
    return 0;
}