#include <stdio.h>
int main()
{
int i; //������ ���� i ����.
int *ptr; //������ ����.
int **dptr; //���� ������ ����.
i = 1234; // ifmf 1234�� �ʱ�ȭ.
printf("[----- [����ȯ] [2019038018] -----]\n");

printf("[checking values before ptr = &i] \n"); //ptr�� i�� �ּҸ� �Ҵ��ϱ� ��.
printf("value of i == %d\n", i); // i�� �� 1234 ���
printf("address of i == %p\n", &i); // i�� �ּ� ���
printf("value of ptr == %p\n", ptr); // ptr�� ��(garbage value) ���
printf("address of ptr == %p\n", &ptr); //ptr�� �ּ� ���
ptr = &i; /* ptr is now holding the address of i */
printf("\n[checking values after ptr = &i] \n"); //ptr�� i�� �ּҸ� �Ҵ��� ��.
printf("value of i == %d\n", i); // 1234���
printf("address of i == %p\n", &i); // i�� �ּ� ���
printf("value of ptr == %p\n", ptr); //ptr�� ����� i�� �ּ� ���. &i�� ����.
printf("address of ptr == %p\n", &ptr); //ptr�� �ּ� ��� 
printf("value of *ptr == %d\n", *ptr); //ptr�� ����Ű�� �ּ��� ���� ���(=i�� ��), 1234
dptr = &ptr; /* dptr is now holding the address of ptr */
printf("\n[checking values after dptr = &ptr] \n"); //dptr(double pointer)�� ptr�� �ּ� �Ҵ�.
printf("value of i == %d\n", i); 
printf("address of i == %p\n", &i); 
printf("value of ptr == %p\n", ptr);
printf("address of ptr == %p\n", &ptr); 
printf("value of *ptr == %d\n", *ptr); //line 24 ~ 28 is same as before. 
printf("value of dptr == %p\n", dptr); //ptr�� �ּ� ���
printf("address of dptr == %p\n", &dptr); // dptr�� �ּ� ���
printf("value of *dptr == %p\n", *dptr); // dptr�� ������ �ִ� ��. ��, ptr�� �ּҸ� ���
printf("value of **dptr == %d\n", **dptr); //ptr�� ������ �ִ� ���� ����Ų��. �� i�� �ּ� ���
*ptr = 7777; /* changing the value of *ptr */ 
printf("\n[after *ptr = 7777] \n"); //i�� ���� 7777�� ������ ��.
printf("value of i == %d\n", i); //7777
printf("value of *ptr == %d\n", *ptr); //7777 ptr�� ����Ű�� �ּ��� ��.
printf("value of **dptr == %d\n", **dptr); //7777 dptr�� ����Ű�� ptr�� ����Ű�� �ּ��� ��.
**dptr = 8888; /* changing the value of **dptr */
printf("\n[after **dptr = 8888] \n"); //���� �����ͷ� i�� ���� control.
printf("value of i == %d\n", i); //8888
printf("value of *ptr == %d\n", *ptr); //8888
printf("value of **dptr == %d\n", **dptr); //8888
return 0;
}
