#include <stdio.h>
void print1(int *ptr, int rows); // �迭����� �ּҿ� �� ����ϴ� �Լ� print1 ����
int main()
{
    printf("[----- [����] [2019038029] -----]\n");
    int one[] = {0, 1, 2, 3, 4}; //int�� ũ�Ⱑ 5�� �迭 one ����
    printf("one = %p\n", one);   //�迭�� �̸� one = &one[0], �װ��� ���
    printf("&one = %p\n", &one); //�迭�� �ּ� = �迭�� �����ּ� = &one[0]
    printf("&one[0] = %p\n", &one[0]); //&one[0] ���
    printf("\n");
    print1(&one[0], 5); // print1 �Լ� ȣ��
    //�Լ��� �μ��� �迭�� �ּҸ� ������ = call by reference , + �迭ũ��
    return 0;
}
void print1(int *ptr, int rows) // �迭 one�� ������ ����ptr�� �޾ƿ�
{ /* print out a one-dimensional array using a pointer */
    //ptr�� �迭ó�� ��밡�� &ptr[i]= (ptr+i) 
    int i;
    printf("Address \t Contents\n");
    for (i = 0; i < rows; i++) //rows�� �޾ƿ� �迭ũ��
        printf("%p \t %5d\n", ptr + i, *(ptr + i)); 
        //�޾ƿ� �迭��ҵ��� �ּҰ� , �� ���
    printf("\n");
}