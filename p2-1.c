#include <stdio.h>
#define MAX_SIZE 100
float sum(float[], int); //�迭����� ���� ���ϴ� �Լ�sum ����
float input[MAX_SIZE], answer; //float�� �迭 input (100ĭ), float�� ���� answer ����
int i; //�ݺ�������� ���� ���� i
void main(void)
{
    printf("[----- [����] [2019038029] -----]\n");
    for (i = 0; i < MAX_SIZE; i++) //100�� �ݺ�
        input[i] = i; //�迭 input[i]�� �� = i�� �ʱ�ȭ
    /* for checking call by reference */
    printf("address of input = %p\n", input); // �迭�̸� = �迭�� �����ּҰ� ���
    answer = sum(input, MAX_SIZE); //sum �Լ� ȣ���� ���ϰ� answer�� �ʱ�ȭ
    //�Լ��� �μ��� �迭�� �ּҸ� ������ = call by reference , + �迭ũ��
    printf("The sum is: %f\n", answer); //answer ���
}
float sum(float list[], int n) // input�� �ּҰ��� list�� �����ؼ� ������,list�� ������ 
{                              // list�� �迭ó�� ����� �� ����, n�� �迭�� ũ��
    printf("value of list = %p\n", list); // list = �迭input�� �����ּҰ� ���
    printf("address of list = %p\n\n", &list); 
    // �迭 �ּ� input�� �޾ƿ� �����ͺ��� list�� ������ ������ �ּ����
    int i;
    float tempsum = 0;
    for (i = 0; i < n; i++)
        tempsum += list[i]; //input�迭 ��ҵ��� ���� �� ����
    return tempsum;         //�� ���� ��������
}
