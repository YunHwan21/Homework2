#include <stdio.h>
int main()
{
 char charType;
 int integerType;
 float floatType;
 double doubleType; //문자형, 정수형, 실수형 변수 선언.

printf("[----- [김윤환] [2019038018] -----]\n"); // 작성자 이름 및 학번 출력;


 printf("Size of char: %ld byte\n",sizeof(charType)); // 문자형 변수인 char Type의 크기(byte) 출력. 1바이트 출력
 printf("Size of int: %ld bytes\n",sizeof(integerType)); // 정수형 변수인 char Type의 크기(byte) 출력. 4바이트 출력
 printf("Size of float: %ld bytes\n",sizeof(floatType)); // 실수형 변수인 char Type의 크기(byte) 출력. 4바이트 출력
 printf("Size of double: %ld bytes\n",sizeof(doubleType)); // 실수(double)형 변수인 char Type의 크기(byte) 출력. 8바이트 출력
 printf("-----------------------------------------\n"); // ----------------------- 출력후 개행.
 printf("Size of char: %ld byte\n",sizeof(char)); // 문자형 자료형의 크기(byte) 출력. 1바이트 출력 
 printf("Size of int: %ld bytes\n",sizeof(int)); // 정수형 자료형의 크기(byte) 출력. 4바이트 출력
 printf("Size of float: %ld bytes\n",sizeof(float)); // 실수형 자료형의 크기(byte) 출력. 4바이트 출력
 printf("Size of double: %ld bytes\n",sizeof(double)); // 실수(double)형 자료형의 크기(byte) 출력. 8바이트 출력
 printf("-----------------------------------------\n"); // ----------------------- 출력후 개행.
 printf("Size of char*: %ld byte\n",sizeof(char*)); //64bit머신의 메모리 1셀의 사이즈는 8byte(=64bit). 그래서 8byte 출력 
 printf("Size of int*: %ld bytes\n",sizeof(int*)); //자료형에 상관없이 64bit머신의 포인터타입 자료형의 사이즈는 8byte이다.
 printf("Size of float*: %ld bytes\n",sizeof(float*));
 printf("Size of double*: %ld bytes\n",sizeof(double*));
 return 0; //0반환
}