#include <stdio.h>

int main(void){
	int a=0;
	int b=0;
	int c=0;
	printf("1. 덧셈\n");
	printf("2. 뺄셈\n");
	printf("3. 곱셈\n");
	printf("입력: ");
	scanf("%d",&c);
	
	printf("첫 숫자: ");
	scanf("%d",&a);
	printf("두번쨰 숫자: ");
	scanf("%d",&b);

	int result;
	        switch(c){
			case 1: result=a+b; break;
			case 2: result=a-b; break;
			case 3: result=a*b; break;
		 }
	printf("결과: %d",result);
}


