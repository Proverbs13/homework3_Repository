#include <stdio.h>
#include <stdlib.h>
void main()
{
    int list[5];  //int�� �迭 list ����
    int *plist[5]; //5���� int�� �����ͺ����� �����Ҽ��ִ� ������ �迭 plist ����

    list[0] = 10; //list[0] �� �ʱ�ȭ
    list[1] = 11; //list[1] �� �ʱ�ȭ

    plist[0] = (int *)malloc(sizeof(int)); //plist[0]�� �� �ּҰ��� ���� �޸𸮸� �������� �����Ҵ�
    printf("[----- [����] [2019038029] -----]\n");
    printf("list[0] \t= %d\n", list[0]); //list[0] �� = 0 ���
    printf("address of list \t= %p\n", list);//list�� �迭�̸�,list[0]�� ����Ŵ,�迭�� �����ּҰ�=&list[0] ���
    printf("address of list[0] \t= %p\n", &list[0]); //�迭�ǽ����ּҰ�=&list[0] ���
    printf("address of list + 0 \t= %p\n", list + 0);//list+0 = list �̹Ƿ� �迭�� �����ּҰ� ���
    printf("address of list + 1 \t= %p\n", list + 1);//list(�迭�����ּ�) + 1(int�� �迭�̹Ƿ� 1ĭ =4����Ʈ) = &list[1] ���
    printf("address of list + 2 \t= %p\n", list + 2);//list(�迭�����ּ�) + 2(int�� �迭�̹Ƿ� 2ĭ =8����Ʈ) = &list[2] ���
    printf("address of list + 3 \t= %p\n", list + 3);//list(�迭�����ּ�) + 3(int�� �迭�̹Ƿ� 3ĭ =12����Ʈ) = &list[3] ���
    printf("address of list + 4 \t= %p\n", list + 4);//list(�迭�����ּ�) + 4(int�� �迭�̹Ƿ� 4ĭ =16����Ʈ) = &list[4] ���
    printf("address of list[4] \t= %p\n", &list[4]); //&list[4] = list[4]�� �����ּҰ����
    
    free(plist[0]); // plist[0] ���� �޸� ����
}