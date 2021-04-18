// 6강
// 함수


// #include <math.h>가 필수임 - 수학 연산

//#include <stdio.h>
//#include <math.h>
//void main() {
//	double x = 12.34;
//	int i = 5, j = 2;
//	int a, b, c;
//	a = ceil(x);
//	b = floor(x);
//	c = pow(4, j);
//	printf("abs(-5)=%d\n", abs(i));
//	printf("ceil(12.34)=%d\n", a);
//	printf("cos(10)=%f\n", cos(10));
//	printf("exp(2)=%.f\n", exp(i));
//	printf("floor(12.34)=%d\n", exp(i));
//	printf("sqrt(2)=%5f\n", sqrt(j));
//	printf("pow(4,2)=%d\n", c);
//}


//#include <string.h>가 필수임-문자열처리
//#include <ctype.h>가 필수임-문자형태 판별
//#include <stdio.h>
//#include <string.h>
//#include <ctype.h>
//void main() {
//	int i, alp=0, no = 0, et = 0;
//	char s[20];
//	printf("문자");
//	scanf("%s", s);
//	for (i = 0; i < strlen(s); i++) { //strlen() 문자열 길이 함수
//		if (isalpha(s[i])) // isalpha() 영문자 여부 확인 함수
//			alp++;
//		else if (isdigit(s[i])) // isdigit() 숫자 여부 확인 함수
//			no++;
//		else
//			et++;
//	}
//	printf("알파벳 = %d\n", alp);
//	printf("숫자 = %d\n", no);
//	printf("기타 = %d\n", et);
//}


//사용자 정의 함수
//#include <stdio.h>
//int sum(int_a, int_b); // 1) 함수의 원형 선언
//void main() {
//		int x, y, c;
//	scanf("%d %d", &x, &y);
//
//	c = sum(10, 20); // 2) 함수의 호출
//	printf("%d\n", c);
//	printf("x+y = %d", sum(x, y));
//}
// int sum(int a, int b) {   //3) 함수의 정의 - 생략할 경우 반환값이 있으면 int, 없으면 void
//	 int d;
//	 d = a + b;
//	 return(d);
// }


// Return문 사용 예시
//#include <stdio.h>
//int max(int x, int y);
//int min(int x, int y);
//void main() {
//	int i = 10, j = 20;
//	printf("max(%d, %d) = %d\n", i, j, max(i, j));
//	printf("min(%d, %d) = %d\n", i, j, min(i, j));
//}
//int max(int x, int y) {
//	return(x > y ? x : y);
//}
//int min(int x, int y) {
//	if (x > y)
//		return y;
//	else
//		return x;
//}



// 함수의 여러 가지 사용 예
//#include <stdio.h>
//int sum(int, int);
//test();
//void main() {
//	int s;
//	test();
//	sum(10, 20);
//	s = sum(30, 40);
//	printf("sum from 30 to 40 = %d\n", s);
//	printf("sum from 100 to 200 = %d\n", sum(100, 200));
//}
//test() {
//	printf("함수의 여러 가지 사용 방법\n");
//}
//int sum(int a, int b) {
//	int i, s = 0;
//	for (i = a; i <= b; i++)
//		s = s + i;
//	return s;
//}



// 7강

// 매개변수 사이의 자료 전달 - 값에 의한 자료 전달
//#include <stdio.h>
//void swap(int x, int y);
//void main() {
//	int a = 3, b = 5;
//	printf("호출 전 a = %d, b = %d\n", a, b);
//	swap(a, b);
//	printf("호출 후 a = %d, b = %d\n", a, b);
//}
//void swap(int x, int y) {
//	int temp;
//	temp = x;
//	x = y;
//	y = temp;
//	printf("함수 내 x = %d, y = %d\n", x, y);
//}


// 매개변수 사이의 자료 전달 - 참조에 의한 자료 전달
//#include <stdio.h>
//void swap(int x, int y);
//void main() {
//	int a = 3, b = 5;
//	printf("호출 전 a = %d, b = %d\n", a, b);
//	swap(&a, &b);
//	printf("호출 후 a = %d, b = %d\n", a, b);
//}
//void swap(int *x, int *y) {
//	int temp;
//	temp = *x;
//	*x = *y;
//	*y = temp;
//	printf("함수 내 x = %d, y = %d\n", *x, *y);
//}


// 지역변수 사용 예 1
//#include <stdio.h>
//void fcn1();
//void main() {
//	int i = 10;
//	printf("\n main i = %d", i);
//	fcn1();
//	printf("\n main i = %d", i);
//}
//void fcn1() {
//	int i;
//	i = 20;
//	printf("\n fcn1 i = %d", i);
//}


// 지역변수 사용 예 2
//#include <stdio.h>
//void main() {
//	//블록 A
//	int x = 2, y = 4;
//	printf("A: x=%d, y=%d\n", x, y);
//	{//블록 B
//		int x; // 블록 B에서 새롭게 다시 정의
//		x = 5;
//		y++; // y는 새롭게 정의하지 않았으므로 그대로 연산
//		printf("B: x=%d, y=%d\n", x, y);
//	}
//	printf("A: x=%d, y=%d\n", x, y);
//}


// 전역변수 사용 예
//#include <stdio.h>
//void fcn1();
//int x; //전역 변수 선언
//void main() {
//	printf("\n 1) x = %d", x);
//	fcn1();
//	printf("\n 2) x = %d", x);
//}
//void fcn1() {
//	x++; // 전역 변수 사용
//}

// 자동변수 사용 예 (auto, 생략 가능)
//#include <stdio.h>
//void main() {
//	int i = 1; //auto가 생략되어있음
//	auto int j = 2;
//	{//블록1
//		int i = 3;
//		{//블록2
//			int i = 4;
//			printf("블록 2의 i = %d\n", i);
//			printf("블록 2의 j = %d\n", j);
//		}
//		printf("블록 1의 i = %d\n", i);
//
//	}
//}



// 정적변수 사용 예 1
//#include <stdio.h>
//void main() {
//	int a = 10; // 자동 변수
//	static int b = 20; // 정적변수
//	{
//		int a = 5; // 블록 내에서만 자동 변수 변경
//		printf("a = %d b = %d\n", a, b);
//
//	}
//	printf("a = %d b = %d\n", a, b);
//}

// 정적변수 사용 예 2
//#include <stdio.h>
//test();
//void main() {
//	int i;
//	i = 0;
//	while (i < 3) {
//		test();
//		i++;
//	}
//}
//test() {
//	auto int a = 0; // 자동 변수는 호출될 때마다 값이 초기화 됨
//	static int s = 0; // 정적 변수는 함수를 빠져나가도 그 값을 유지
//	printf("auto = %d, static = %d\n", a, s);
//	++a;
//	++s;
//}


// 외부변수 사용 예 1
//#include <stdio.h>
//int i = 10;
//int j = 20;
//void main() {
//	extern int i; // 변수 i가 함수 바깥에 있지만 먼저 선언되었으므로 전체를 생략 가능
//	extern int k; // 변수 k가 함수 바깥에 있으므로 extern int k 까지 꼭 넣어줘야 함
//	int j = 100;
//	printf("i = %d, j = %d, k = %d", i, j, k);
//
//}
//int k = 50;


//// 외부변수 사용 예 2
//#include <stdio.h>
//#pragma warning(disable:4996)
//void extern_ex();
//char s[100];
//void main() {
//	printf("문자열을 입력하세요 : ");
//	scanf("%s", s);
//	printf("입력 문자열은 %s는 전역변수 s에 저장\n", s);
//	extern_ex();
//}
//
//// 독립된 파일에서도 사용할 수 있음
//extern char s[];
//void extern_ex() {
//	printf("외부변수 s값은 %s입니다. \n", s);
//}


// 레지스터 변수 사용 예 - 자동 변수와 동일한 기능, 반복 횟수를 정의하는 경우 CPU내 레지스터가 빠르게 이 변수를 불러오도록 정의
//#include <stdio.h>
//void main() {
//	register int i;
//	int sum = 0;
//	for (i = 0; i <= 10; ++i)
//		sum += i;
//	i -= 1;
//	printf("i = %d sum = %d\n", i, sum);
//}


// 8강 배열과 포인터

// 1차원 배열 사용 예1
//#include <stdio.h>
//void main() {
//	int array1[4] = { 10,20,30,40 };
//	int array2[] = { 10,20,30,40 };
//	int array3[4] = { 10,20 };
//	int array4[4] = { 0 };
//	int i;
//		for(i=0; i<=3; i++)
//			printf("array1[%d] = %d \t", i, array1[i]);
//		printf("\n");
//		for (i = 0; i <= 3; i++)
//			printf("array1[%d] = %d \t", i, array2[i]);
//		printf("\n");
//		for (i = 0; i <= 3; i++)
//			printf("array1[%d] = %d \t", i, array3[i]);
//		printf("\n");
//		for (i = 0; i <= 3; i++)
//			printf("array1[%d] = %d \t", i, array4[i]);
//		printf("\n");
//}

// 1차원 배열 사용 예2
//#include <stdio.h>
//void main() {
//	static int x[] = { 1,2,3,4 };
//	static int y[] = { 10,20,30,40 };
//	int i, z[4];
//	for (i = 0; i < 4; ++i)
//		z[i] = x[i] + y[3 - i];
//	printf("반대 위치의 배열요소 합\n");
//	for (i = 0; i < 4; ++i)
//		printf("%d + %d = %d\n", x[i], y[3 - i], z[i]);
//}

// 2차원 배열 사용 예
//#include <stdio.h>
//void main() {
//	static int score[4][3] = { 
//		{90,90,90}, 
//		{80,80,80}, 
//		{70,70,70}, 
//		{60,60,60} };
//	int sum, i, j;
//	printf("번호\t국어\t수학\t영어\t합계\n");
//	for (i = 0; i < 4; ++i) {
//		sum = 0;
//		printf("%3d", i + 1);
//		for (j = 0; j < 3; j++) {
//			printf("\t%3d", score[i][j]);
//			sum += score[i][j];
//		}
//		printf("\t%3d\n", sum);
//	}
//	
//
//}

// char형 배열의 사용 예1
//#include <stdio.h>
//void main() {
//	char name[] = "HONG GIL DONG";
//	char adrs1[6] = { 'S', 'E', 'O', 'U', 'L', '\0' };
//	char adrs2[6] = { 'S', 'E', 'O', 'U', 'L' }; // null값이 없는 자리에 쓰레기 값이 들어올 수 있음
//	printf("\n name : %s", name);
//	printf("\n name : %s", adrs1);
//	printf("\n name : %s", adrs2);
//}

// char형 배열의 사용 예2
//#include <stdio.h>
//void main() {
//	char string[50];
//	int i = 0;
//	printf("문자열을 입력하세요 : ");
//	scanf("%s", string);
//	printf("입력받은 문자열 : %s\n", string);
//	printf("문자 단위 출력 : ");
//	while (string[i] != '\0') {  //scanf함수에 char입력 시 마지막에 자동으로 null값 넣음
//		printf("%c", string[i]); 
//		i++;
//	}
//}

// 배열을 함수의 매개변수로 사용한 경우
//#include <stdio.h>
//void score_sum(int gr[][5], int, int);
//void main() {
//	int score[2][5] = { {10, 20, 30, 40, 50}, {10, 10, 10, 10, 10} };
//	score_sum(score, 2, 5);
//}
//void score_sum(int gr[][5], int row, int column) {
//	int sum[2] = { 0 };
//	int i, j;
//	for (i = 0; i < row; i++) {
//		for (j = 0; j < column; j++)
//			sum[i] += gr[i][j];
//		printf("sum[%d] = %d \n", i, sum[i]);
//
//	}
//}

// 포인터 - 변수의 주소 예
//#include <stdio.h>
//void main() {
//	int days = 365;
//	int month = 12;
//	int Table[5] = { 1,2,3,4,5 };
//	printf("days의 주소는 %x\n", &days);
//	printf("month의 주소는 %x\n", &month);
//	printf("배열명 Table의 주소는 %x\n", Table);
//	printf("배열명 Table의 첫번째 요소의 주소는 %x\n", &Table[0]);
//	printf("배열명 Table의 두번째 요소의 주소는 %x\n", &Table[1]);
//
//}


// 포인터변수의 사용 예
//#include <stdio.h>
//void main() {
//	int a, b;
//	int *p;
//	a = 5000;
//	p = &a;
//	b = *p;
//	printf("a = %d\n", a); // 변수 a
//	printf("p = %x\n", p); // 변수 a의 주소
//	printf("b = %d\n", b); // 변수 a의 주소에 있는 값을 b에 입력
//	printf("&b = %x\n", &b); // 변수 b의 주소
//}

// 포인트변수의 참조 예
//#include <stdio.h>
//void main() {
//	int *p, i = 3, j;
//	p = &i;
//	j = *p;
//	j++;
//	printf("*p = %d\n", *p);
//	printf("p = %x\n", p);
//	printf("j = %d\n", j);
//	printf("&j = %x\n", &j);
//
//}

// void형 포인터의 사용 예
//#include <stdio.h>
//void main() {
//	int a = 100;
//	char b = 'b';
//	void* p = NULL;
//	p = (int*)&a;
//	printf("*p = %d\n", *(int*)p);
//	p = (char*)&b;
//	printf("*p = %c\n", *(char*)p);
//	}

// 포인터 연산의 예 1
#include <stdio.h>
void main() {
	int* p, a[] = { 10,20,30,40,50 };
	p = &a[0];
	printf("*p == %d\n", *p)
}