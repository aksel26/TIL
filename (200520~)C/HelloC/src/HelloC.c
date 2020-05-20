#include <stdio.h>

//printf 를 갖다 쓰려면 헤더파일인 #include <stdio.h> 가 필요하다.

int main(void) {

//	printf("@@@@@\n@@@@@\n@@@@@");
//	printf("@@@@@\n@   @\n@   @\n@@@@@");
//	printf("      $\n     $ $ $\n   $ $ $ $ $\n $ $ $ $ $ $ $");

	int a = 1234, b = 11, c  =12;
	printf("%d\n%d\n%d" ,a,b,c );


	float av= 123456789;
	printf("%f\n", av);
	// 12123456792.000000  오차발생
	// 더 많은 자리수를 가지는 double을 활용하자

	double doub = 123456789012345;
	printf("%f\n" , doub);
//	정학히 나온다


	int aa = 35, bb = 3;
	double cc;
	cc = (double)aa/bb;
	printf("%0.1f\n", cc);
//	실수 / 정수  = 실수형

	char str = 'A';
	printf("%d\n", str);	//아스키코드 (A) 65
	printf("%c\n", str);	// A

	str = str + 1;

	printf("%d\n", str);	//아스키코드 (B) 66
	printf("%c\n", str);	// B

	int number;
	scanf("%d", &number);
	printf("input value = %d\n", number);

	int num1, num2;

	scanf("%d %d", &num1,&num2);
	printf("input value = %d\n %d\n", num1,num2);








	return 0;

}
