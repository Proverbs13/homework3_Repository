#include <stdio.h>
#include <stdlib.h>
void main()
{
    int list[5]; // int �� �迭 list ����
    int *plist[5] = { NULL,  }; //5���� int�� �����ͺ����� �����Ҽ��ִ� ������ �迭 ����,���� NULL�� �־���

    plist[0] = (int *)malloc(sizeof(int)); //plist[0]�� �� �ּҰ��� ���� �޸𸮸� �������� �����Ҵ�
    list[0] = 1;  //list[0]�� ��=1�� �ʱ�ȭ
    list[1] = 100;//list[1]�� ��=100���� �ʱ�ȭ

    *plist[0] = 200;//plist[0]�� �޸𸮿��� ��=200�� ����� ������ �ּҰ��� ����
    printf("[----- [����] [2019038029] -----]\n");
    printf("value of list[0] = %d\n", list[0]);   //list[0]�� ��= 1 ���
    printf("address of list[0] = %p\n", &list[0]);//&list[0]�� �ּҰ�=�迭�ǽ����ּ� ���
    printf("value of list = %p\n", list);         //�迭�� �̸��� �迭 �����ּ�.���� ���� �� ���
    printf("address of list (&list) = %p\n", &list);//���״�� �迭�� �ּ� = �����ּ� ���
    printf("----------------------------------------\n\n");
    printf("value of list[1] = %d\n", list[1]);      //list[1]�� ��= 100 ���
    printf("address of list[1] = %p\n", &list[1]);   //&list[1]�� �ּҰ�=�迭�ǽ����ּ�+4(intũ��) ���
    printf("value of *(list+1) = %d\n", *(list + 1));//�迭�̸�(list�����ּ�)+ 1(1ĭ=int�� 4����Ʈ) = &list[1] �̹Ƿ� 
                                                     //  �� list+1�� ����Ű�� �� 100 ���
    printf("address of list+1 = %p\n", list + 1);    // ���� ���� ���� &list[1]�� ���� �� ���
    printf("----------------------------------------\n\n");
    printf("value of *plist[0] = %d\n", *plist[0]); //plist[0]�� ����Ű�� �� = 200 ���
    printf("&plist[0] = %p\n", &plist[0]);//�� ������ �����Ҵ�� plist[0]�� �� ����� �ּ� ���
    printf("&plist = %p\n", &plist); //�迭�� �����ּ�=�迭 ù��° ����� ���� �ּ�  ���
    printf("plist = %p\n", plist);   //�迭�� �̸� = �迭�� �����ּ�  ���
    printf("plist[0] = %p\n", plist[0]); //plist[0]�� ����Ű�� �޸𸮿��� ��=200�� ����� ������ �ּҰ� ���
    printf("plist[1] = %p\n", plist[1]); //
    printf("plist[2] = %p\n", plist[2]); //plist[1~4]�� NULL�� �ʱ�ȭ �Ͽ� 0�� ����Ŵ(�ƹ��͵� ����Ű�� ����)
    printf("plist[3] = %p\n", plist[3]); //
    printf("plist[4] = %p\n", plist[4]); //
    free(plist[0]); // plist[0] ���� �޸� ����
}