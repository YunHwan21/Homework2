#include <stdio.h>
int main()
{
 char charType;
 int integerType;
 float floatType;
 double doubleType; //������, ������, �Ǽ��� ���� ����.

printf("[----- [����ȯ] [2019038018] -----]\n"); // �ۼ��� �̸� �� �й� ���;


 printf("Size of char: %ld byte\n",sizeof(charType)); // ������ ������ char Type�� ũ��(byte) ���. 1����Ʈ ���
 printf("Size of int: %ld bytes\n",sizeof(integerType)); // ������ ������ char Type�� ũ��(byte) ���. 4����Ʈ ���
 printf("Size of float: %ld bytes\n",sizeof(floatType)); // �Ǽ��� ������ char Type�� ũ��(byte) ���. 4����Ʈ ���
 printf("Size of double: %ld bytes\n",sizeof(doubleType)); // �Ǽ�(double)�� ������ char Type�� ũ��(byte) ���. 8����Ʈ ���
 printf("-----------------------------------------\n"); // ----------------------- ����� ����.
 printf("Size of char: %ld byte\n",sizeof(char)); // ������ �ڷ����� ũ��(byte) ���. 1����Ʈ ��� 
 printf("Size of int: %ld bytes\n",sizeof(int)); // ������ �ڷ����� ũ��(byte) ���. 4����Ʈ ���
 printf("Size of float: %ld bytes\n",sizeof(float)); // �Ǽ��� �ڷ����� ũ��(byte) ���. 4����Ʈ ���
 printf("Size of double: %ld bytes\n",sizeof(double)); // �Ǽ�(double)�� �ڷ����� ũ��(byte) ���. 8����Ʈ ���
 printf("-----------------------------------------\n"); // ----------------------- ����� ����.
 printf("Size of char*: %ld byte\n",sizeof(char*)); //64bit�ӽ��� �޸� 1���� ������� 8byte(=64bit). �׷��� 8byte ��� 
 printf("Size of int*: %ld bytes\n",sizeof(int*)); //�ڷ����� ������� 64bit�ӽ��� ������Ÿ�� �ڷ����� ������� 8byte�̴�.
 printf("Size of float*: %ld bytes\n",sizeof(float*));
 printf("Size of double*: %ld bytes\n",sizeof(double*));
 return 0; //0��ȯ
}