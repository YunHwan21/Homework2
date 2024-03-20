#include <stdio.h>
int main()
{
int i; //정수형 변수 i 선언.
int *ptr; //포인터 선언.
int **dptr; //이중 포인터 선언.
i = 1234; // ifmf 1234로 초기화.
printf("[----- [김윤환] [2019038018] -----]\n");

printf("[checking values before ptr = &i] \n"); //ptr에 i의 주소를 할당하기 전.
printf("value of i == %d\n", i); // i의 값 1234 출력
printf("address of i == %p\n", &i); // i의 주소 출력
printf("value of ptr == %p\n", ptr); // ptr의 값(garbage value) 출력
printf("address of ptr == %p\n", &ptr); //ptr의 주소 출력
ptr = &i; /* ptr is now holding the address of i */
printf("\n[checking values after ptr = &i] \n"); //ptr에 i의 주소를 할당한 후.
printf("value of i == %d\n", i); // 1234출력
printf("address of i == %p\n", &i); // i의 주소 출력
printf("value of ptr == %p\n", ptr); //ptr에 저장된 i의 주소 출력. &i와 같다.
printf("address of ptr == %p\n", &ptr); //ptr의 주소 출력 
printf("value of *ptr == %d\n", *ptr); //ptr이 가르키는 주소의 값을 출력(=i의 값), 1234
dptr = &ptr; /* dptr is now holding the address of ptr */
printf("\n[checking values after dptr = &ptr] \n"); //dptr(double pointer)에 ptr의 주소 할당.
printf("value of i == %d\n", i); 
printf("address of i == %p\n", &i); 
printf("value of ptr == %p\n", ptr);
printf("address of ptr == %p\n", &ptr); 
printf("value of *ptr == %d\n", *ptr); //line 24 ~ 28 is same as before. 
printf("value of dptr == %p\n", dptr); //ptr의 주소 출력
printf("address of dptr == %p\n", &dptr); // dptr의 주소 출력
printf("value of *dptr == %p\n", *dptr); // dptr이 가지고 있는 값. 즉, ptr의 주소를 출력
printf("value of **dptr == %d\n", **dptr); //ptr이 가지고 있는 값을 가르킨다. 즉 i의 주소 출력
*ptr = 7777; /* changing the value of *ptr */ 
printf("\n[after *ptr = 7777] \n"); //i의 값을 7777로 변경한 후.
printf("value of i == %d\n", i); //7777
printf("value of *ptr == %d\n", *ptr); //7777 ptr이 가르키는 주소의 값.
printf("value of **dptr == %d\n", **dptr); //7777 dptr이 가르키는 ptr이 가르키는 주소의 값.
**dptr = 8888; /* changing the value of **dptr */
printf("\n[after **dptr = 8888] \n"); //이중 포인터로 i의 값을 control.
printf("value of i == %d\n", i); //8888
printf("value of *ptr == %d\n", *ptr); //8888
printf("value of **dptr == %d\n", **dptr); //8888
return 0;
}
