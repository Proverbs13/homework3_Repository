#include <stdio.h>
struct student1 //����ü student1 ����
{
    char lastName;
    int studentId;
    char grade;
};
typedef struct //typedef�� �̿��� ����ü ����
{
    char lastName;
    int studentId;
    char grade;
} student2;  //����ü ��Ī student2
int main()
{
    printf("[----- [����] [2019038029] -----]\n");
    struct student1 st1 = {'A', 100, 'A'}; //student1 ����ü���� st1 ����,�ʱ�ȭ
    printf("st1.lastName = %c\n", st1.lastName);  //st1�� lastName ���
    printf("st1.studentId = %d\n", st1.studentId);//st1�� studentId ���
    printf("st1.grade = %c\n", st1.grade);        //st1�� grade ���

    student2 st2 = {'B', 200, 'B'}; //student2 ����ü���� st2 ����,�ʱ�ȭ 
    //��Ī�� ����� struct�� �Ƚ��൵ ��
    printf("\nst2.lastName = %c\n", st2.lastName);//st2�� lastName ���
    printf("st2.studentId = %d\n", st2.studentId);//st2�� studentId ���
    printf("st2.grade = %c\n", st2.grade);        //st2�� grade ���

    student2 st3; //student2 ����ü���� st3 ����
    st3 = st2;    //����ü st2�� ����� ���� st3 �� ��ҿ� ��������
    printf("\nst3.lastName = %c\n", st3.lastName);//st2�� ���� �� ��µ�
    printf("st3.studentId = %d\n", st3.studentId);
    printf("st3.grade = %c\n", st3.grade);
    /* equality test */
    //if (st3 == st2) /* not working */ //���� �߻�
    //    printf("equal\n");
    //else
    //    printf("not equal\n");
    //C����� ����ü������ ����Ÿ���̶�� �ص� ������ X
    //���� �ּ�ó���� �ڵ�� ������ ��, �����񱳸� ���ؼ� ����ü�� ��ҵ鳢�� �� �ؾ��� 
    return 0;
}
