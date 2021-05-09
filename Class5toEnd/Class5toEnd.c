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
//#include <stdio.h>
//void main() {
//	int* p, a[] = { 10,20,30,40,50 };
//	p = &a[0];
//	printf("*p == %d\n", *p);
//	printf("*p++ == %d\n", *p++);
//	printf("*++p == %d\n", *++p);
//	p = p + 2;
//	printf("*p == %d\n", *p);
//	printf("a[2] == %d\n", a[2]);
//	printf("*p+2 == %d\n", *p + 2);
//}

// 포인터 연산의 예 2
//#include <stdio.h>
//void main() {
//	int* p, * q;
//	int a[] = { 10,20,30,40,50,60,70,80,90,100 };
//	p = &a[3];
//	printf("*p == %d\n", *p);
//	printf("*(p+3) == %d\n", *(p + 3));
//	q = p + 3;
//	printf("*p == %d\n", *q);
//	printf("p-q == %d\n", p - q);
//	printf("q-p == %d\n", q - p);
//	// printf("q+p == %d\n", q+p);
//}



// 10강 배열과 포인터 3

// char형 포인터 예시
//#include <stdio.h>
//void main() {
//	char* cp = "COMPUTER";
//	int i = 0;
//	do
//		printf("*(cp+%d) : %c\n", i, *(cp + i));
//	while (*(cp + i++) != 0);
//}

// 포인터 위치 테스트...
//#include <stdio.h>
//void main() {
//	char s[] = "SCIENCE";
//	int* p_a, * p_b;
//	printf("%x\n", s);
//	printf("%x\n", s[0]);
//	p_a = &s[0];
//	printf("%x\n", p_a);
//	printf("%x\n", s[1]);
//	p_b = &s[1];
//	printf("%x\n", p_b);
//}

// 포인터를 이용한 1차원 배열의 참조 예
//#include <stdio.h>
//void main() {
//	static int a[] = { 10, 20, 30, 40, 50 };
//	int* pt, b, c, d;
//	pt = a;
//	b = *pt + *(pt + 3);
//	pt++;
//	c = *pt + *(pt + 3);
//	d = *pt + 3;
//	printf("b=%d, c=%d, d=%d", b, c, d);
//}

// 포인터를 이용한 2차원 배열의 참조 예
//#include <stdio.h>
//void main() {
//	static a[3][3] = { {1,2,3}, {4,5,6}, {7,8,-9} };
//	int* pt;
//	pt = a[0]; // pt=a 또는 pt=&a[0][0]과 동일
//	while (*pt != -9) {
//		printf("%d", *pt);
//		pt++;
//	}
//}

// 포인터와 배열의 호환 예
//#include <stdio.h>
//void main() {
//	char A[] = "ARRAY";
//	char* p = "POINTER";
//	int i;
//	for (i = 0; i < 5; i++)
//		printf("*(A+%d) : %c\n", i, *(A + i));
//	for (i = 0; i < 5; i++)
//		printf("A[%d] : %c\n", i, A[i]);
//	for (i = 0; i < 7; i++)
//		printf("*(p+%d) : %c\n", i, *(p+i));
//	for (i = 0; i < 7; i++)
//		printf("p[%d] : %c\n", i, p[i]);
//}

// 포인터 배열의 사용 예
//#include <stdio.h>
//void main() {
//	int a[] = { 1,2,3,4 };
//	int b[] = { 5,6,7,8 };
//	int* PA[2];
//	PA[0] = a;
//	PA[1] = b;
//	printf("*(PA[0]) = %d\n", *(PA[0]));
//	printf("*(PA[0]+1) = %d\n", *(PA[0] + 1));
//	printf("*(PA[1]) = %d\n", *PA[1]);
//	printf("*PA[1]+15 = %d\n", *PA[1] + 15);
//}

// 이중 포인터
//#include <stdio.h>
//void main() {
//	char a = 'A', * p, ** pp;
//	p = &a;
//	pp = &p;
//	printf("**pp = %c", **pp);
//}



// 10강 구조체와 공용체 1

// 구조체 정의와 변수 선언 예 1
//#include <stdio.h>
//void main() {
//	struct score {
//		char no[4];
//		char name[8];
//		int kor;
//		int eng;
//		int math;
//		int hist;
//	}; // while 뒤에는 괄호 뒤에 ; 안 붙는데...
//	struct score X, Y;
//}

// 구조체 정의와 변수 선언 예 2
//#include <stdio.h>
//void main() {
//	struct score {
//		char no[4];
//		char name[8];
//		int kor;
//		int eng;
//		int math;
//		int hist;
//	} X, Y;
//}

// 구조체 정의와 변수 선언 예 3
//#include <stdio.h>
//void main() {
//	typedef struct score {
//		char no[4];
//		char name[8];
//		int kor;
//		int eng;
//		int math;
//		int hist;
//	} jumsu;// struct score를 jumsu라는 새로운 자료형으로 정의
//	jumsu X, Y; // 자료형 jumsu의 변수 X, Y를 선언
//}

// 구조체 변수의 초기화
//#include <stdio.h>
//void main() {
//	struct person {
//		char name[8];
//		int age;
//		char sex;
//	} X = { "홍길동", 20, 'M' };
//	// struct person X = { "홍길동", 20, 'M' };
//}

//// 구조체 멤버의 참조 예 1
//#include <stdio.h>
//#include <string.h>
//struct person {
//	char name[8];
//	int age;
//	char sex;
//};
//void main() {
//	struct person X = { "홍길동", 30, 'M' };
//	struct person Y;
//	strcpy(Y.name, "임꺽정");
//	Y.age = 35;
//	Y.sex = 'M';
//	printf("X의 정보 : %s, %d, %c\n", X.name, X.age, X.sex);
//	printf("Y의 정보 : %s, %d, %c\n", Y.name, Y.age, Y.sex);
//}



// 구조체 멤버의 참조 예 2
//#include <stdio.h>
//#include <string.h>
//struct person {
//	char name[8];
//	int age;
//	char sex;
//};
//void main() {
//	struct person X = { "홍길동", 30, 'M' };
//	printf("sizeof(person.name) : %dbyte\n", sizeof(X.name)); //1char * 8 = 8바이트
//	printf("sizeof(person.age) : %dbyte\n", sizeof(X.age)); // int 4바이트
//	printf("sizeof(person.sex) : %dbyte\n", sizeof(X.sex)); // 1char 1바이트
//	printf("sizeof(person) : %dbyte \n", sizeof(X)); // 8+4+4바이트 -> 가장 큰 자료형의 사이즈(int,4byte)가 최소 크기로 바뀜
//}

// 구조체 배열의 사용 예
//#include <stdio.h>
//void main() {
//	struct person {
//		char* name;
//		int age;
//		char sex;
//	};
//	struct person X[3] = {
//		{"홍길동", 20, 'M'},
//		{"황진이", 22, 'F'},
//		{"임꺽정", 30, 'M'} };
//	int i, sum = 0;
//	for (i = 0; i < 3; i++) {
//		printf("이름 : %s 나이 : %d 성별 : %c\n",
//			X[i].name, X[i].age, X[i].sex);
//		sum = sum + X[i].age;
//
//	}
//	printf("나이 합 = %d", sum);
//}


// 구조체 포인터
//#include <stdio.h>
//struct student {
//	char name[10];
//	int kor;
//	int math;
//};
//void main() {
//	struct student hs[4] = {
//		{ "KIM HG", 90, 95 },
//		{"LEE SY", 85, 90},
//		{"PARK GS", 70, 85},
//		{"CHOI HJ", 95, 75} };
//	struct student* p;
//	p = hs;
//	printf("%s %d %d\n", p->name, p->kor, p->math);
//	p += 3;
//	printf("%s %d %d\n", p->name, p->kor, p->math);
//	p--;
//	printf("%s %d %d\n", p->name, p->kor, p->math);
//}


// 12강 구조체와 공용체

// 구조체를 함수의 매개변수로 사용 예
//#include <stdio.h>
////struct num calc(struct num);
//struct num {
//	int x;
//	int y;
//	int sum;
//	int mul;
//};
//
//struct num calc(struct num number2) {
//	number2.sum = number2.x + number2.y;
//	number2.mul = number2.x * number2.y;
//	return(number2);
//}
//void main() {
//	struct num number1;
//	number1.x = 10;
//	number1.y = 20;
//	number1 = calc(number1);
//	printf("x:%d, y:%d, sum:%d, mul:%d\n",
//		number1.x, number1.y, number1.sum, number1.mul);
//	//getchar();
//}


// 구조체 포인터를 함수의 매개변수로 사용 예
//#include <stdio.h>
//struct num calc(struct num *);
//struct num {
//	int x;
//	int y;
//	int sum;
//	int mul;
//};
//
//
//void main() {
//	struct num number1;
//	number1.x = 10;
//	number1.y = 20;
//	calc(&number1);
//	printf("x:%d, y:%d, sum:%d, mul:%d\n",
//		number1.x, number1.y, number1.sum, number1.mul);
//}
//
//struct num calc(struct num *number2) {
//	number2->sum = number2->x + number2->y;
//	number2->mul = number2->x * number2->y;
//}


// typedef의 사용 예 1
//#include <stdio.h>
//struct data {
//	int x;
//	int y;
//};
//typedef struct data DATA;
//
////typedef struct data {
////	int x;
////	int y;
////} DATA; // 같은 내용
//
//void main() {
//	DATA d = { 1,2 };
//	printf("d.x = %d, d.y = %d\n", d.x, d.y);
//}


// typedef의 사용 예 2
//#include <stdio.h>
//#include <string.h>
//struct person {
//	char name[20];
//	char sex;
//	int age;
//};
//
//typedef struct person MAN;
//typedef unsigned char CHAR;
//typedef int* PTR;
//void main() {
//	MAN member;
//	CHAR data;
//	PTR pt;
//	strcpy(member.name, "홍길동");
//	member.sex = 'M';
//	member.age = 30;
//	data = 100;
//	pt = &(member.age);
//	printf("*pt=%d\n", *pt);
//}


// 구조체 비트필드의 사용 예
//#include <stdio.h>
//void main() {
//	struct test {
//		unsigned a : 5;
//		unsigned b : 6;
//		unsigned c : 6;
//		unsigned d : 4;
//	};
//	struct test v = { 1,2,3,4 };
//	printf("v.a = %d v.b = %d, v.c = %d, v.d = %d\n")
//}



// 13강 파일 처리 함수 1

// 파일 입력 예시
//#include <stdio.h>
//#pragma warning(disable:4996)
//
//void main() {
//	char ch;
//	FILE* fp;
//	fp = fopen("sample.txt", "w"); // write, read, add
//	for (ch = 'A'; ch <= 'Z'; ch++)
//		fputc(ch, fp);
//	fclose(fp);
//}


// 파일 열기/닫기 사용 예
//#include <stdio.h>
//#pragma warning(disable:4996)
//void main() {
//	FILE* fp1, * fp2;
//	fp1 = fopen("c:\\users\\kay\\documents\\text.txt", "w");
//	fp2 = fopen("c:\\source\\test.c", "r");
//	if ((fp2 = fopen("C:\\source\\test.c", "r")) == NULL) {
//		puts("파일을 열 수 없음!");
//		exit(1);
//	}
//	fclose(fp1);
//	fclose(fp2);
//}


// 14강 파일 처리 함수 2
// 순차파일 - putc() 함수의 사용 예
//#include <stdio.h>
//#include <stdlib.h>
//#pragma warning(disable:4996)
//
//void main() {
//	FILE* fp;
//	char c;
//	fp = fopen("sample1.dat", "w");
//	if (fp == NULL) {
//		printf("파일을 개방할 수 없습니다!");
//		exit(1);
//	}
//	while ((c = getchar()) != EOF)  //EOF = Ctrl+Z
//		putc(c, fp);
//	fclose(fp);
//}


// fput() 함수의 사용 예
//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//#pragma warning(disable:4996)
//
//void main() {
//	char name[64];
//	FILE* fp;
//	if ((fp = fopen("sample2.dat", "w")) == NULL) {
//		puts("파일을 개방할 수 없습니다!");
//		exit(1);
//	}
//	gets(name);
//	while (strcmp(name, "end")) { //strcmp 두 문자열 비교
//		strcat(name, "\n"); //하나의 문자열 길이가 일정하지 않으므로 구분 목적으로 \n 추가
//							//strcat 두 문자열 붙이기
//		fputs(name, fp);
//		gets(name);
//	}
//	fclose(fp);
//}

//fprintf() 함수
//#include <stdio.h>
//#include <stdlib.h>
//#pragma warning(disable:4996)
//
//void main() {
//	FILE* fp;
//	char no[10], name[10];
//	int mid, term, rep, att, i;
//	fp = fopen("sample3.dat", "w");
//	if (fp == NULL) {
//		printf("파일을 개방할 수 없습니다!");
//		exit(1);
//	}
//	fprintf(stdout, "학번 이름 중간 기말 레포트 출석 점수를 입력\n");
//	for (i = 0; i < 5; ++i) {
//		scanf("%s %s %d %d %d %d", no, name, &mid, &term, &rep, &att);
//		fprintf(fp,"%10s %8s %3d %3d %3d %3d \n", no, name, mid, term, rep, att);
//	} //지정된 형식으로 파일에 자료를 저장
//	fclose(fp);
//}

// getc() 함수
//#include <stdio.h>
//#include <stdlib.h>
//#pragma warning(disable:4996)
//void main() {
//	FILE* fp;
//	char c;
//	fp = fopen("sample1.dat", "r");
//	if (fp == NULL) {
//		printf("파일을 개방할 수 없습니다!");
//		exit(1);
//	}
//	while ((c = getc(fp)) != EOF)
//		putchar(c);
//	fclose(fp);
//}

// fgets()함수 - 문자열 길이 명시 해야함(null값 포함하여 +1)
//#include <stdio.h>
//#include <stdlib.h>
//#pragma warning(disable:4996)
//void main() {
//	char name[20];
//	FILE* fp;
//	if ((fp = fopen("sample2.dat", "r")) == NULL) {
//		puts("파일을 개방할 수 없습니다!");
//		exit(1);
//	}
//	while (fgets(name, 20, fp) != NULL)
//		printf("%s", name);
//	fclose(fp);
//}

// fscanf()함수 - 주로 파일의 끝을 판별하는 feof() 함수와 함께 사용
//#include <stdio.h>
//#include <stdlib.h>
//#pragma warning(disable:4996)
//void main() {
//	FILE* fp;
//	char no[10], name[10];
//	int mid, term, rep, att;
//	fp = fopen("sample3.dat", "r");
//	if (fp == NULL) {
//		printf("파일을 개방할 수 없습니다.");
//		exit(1);
//	}
//	printf("학번 이름 중간 기말 리포트 출석\n");
//	while (!feof(fp)) {
//		fscanf(fp, "%10s %8s %3d %3d %3d %3d\n",
//			no, name, &mid, &term, &rep, &att);
//		printf("%10s %8s %4d %4d %4d %4d\n",
//			no, name, mid, term, rep, att);
//	}
//}


// 레코드 추가의 사용 예
//#include <stdio.h>
//#pragma warning(disable:4996)
//void main() {
//	FILE* fp;
//	fp = fopen("sample4.dat", "a");
//	fputs("Cho DS\n", fp);
//	fputs("Han JK\n", fp);
//	fputs("Kang MH\n", fp);
//	fclose(fp);
//}

// 순차파일 끝 ~ 랜덤파일 시작

// fwrite() 함수
/*#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#pragma warning(disable:4996)
void main() {
	FILE* fp;
	char name[10];
	if((fp = fopen("sample5.dat", "wb")) == NULL) {
		puts("파일을 개방할 수 없습니다!");
		exit(1);
	}
	gets(name);
	while(strcmp(name, "end")) {
		fwrite(name, 10, 1, fp);
		gets(name);
	}
	fclose(fp);
}*/

// fread() 함수
//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//#pragma warning(disable:4996)
//void main() {
//	FILE* fp;
//	char name[10];
//	if ((fp = fopen("sample5.dat", "rb")) == NULL) {
//		puts("파일을 개방할 수 없습니다!");
//		exit(1);
//	}
//	while (1) {
//		if (fread(name, 10, 1, fp) != 1) //fread(읽을 자료 변수, 레코드 길이, 레코드 개수, 파일 포인터)
//				break;
//		puts(name);
//	}
//	fclose(fp);
//}

// fseek() 함수 - 파일 포인터를 임의의 위치로 이동시키고, 랜덤파일의 특정 부분을 입/출력
//#include <stdio.h>
//#include <stdlib.h>
//#pragma warning(disable:4996)
////SEEK_CUR 특정 위치로 이동 , SEEK_SET 기본 위치 셋팅, SEEK_END 파일의 마지막 끝 기준
//void main() {
//	char str[10];
//	FILE* fp = fopen("sample6.txt", "wt");
//	fputs("1234567890", fp);
//	fclose(fp);
//	fp = fopen("sample6.txt", "rt");
//	fseek(fp, 7, SEEK_SET); //파일의 시작 위치를 시작(1) 에서 7만큼 이동한 위치(8)로 셋팅
//	fgets(str, 4, fp); //8부터 3글자 출력(null포함 시 4글자), 출력 이후 커서는 끝에 남음
//	printf("7번째부터 3글자 출력 : %s \n", str); //890 출력
//	fseek(fp, -2, SEEK_CUR); // 커서 위치 앞으로 2칸 옮김(0뒤->8뒤(9))
//	fgets(str, 3, fp); // 9에서 2글자 출력
//	printf("현재 위치에서 앞에 2글자부터 2글자 출력 : %s \n", str); //90 출력
//	fseek(fp, -9, SEEK_END); // 맨 뒤 기준 앞으로 9칸 이동(0뒤 -> 1뒤)
//	fgets(str, 6, fp); // 1뒤(2)부터 5글자 출력
//	printf("맨 뒤에서 9번째 앞부터 5글자 출력 : %s \n", str); // 23456 출력
//	fclose(fp);
//}



// 15�� �޸� ���� �Ҵ�


// �޸� ���� �Ҵ��� ��
//#include <stdio.h>
//void test1(int);
//void test2(int);
//int a = 100;
//void main() {
//   int b = a;
//   test1(b);
//   test2(b);
//}
//void test1(int c) {
//   int d;
//   d = c + 10;
//   printf("%d", d);
//}
//void test2(int e) {
//   int f;
//   f = e + 20;
//   printf("%d", f);
//}


// �޸� ���� �Ҵ��� ������ ��
//#include <stdio.h>
//void main(void) {
//   int size;
//   char a[size];   // ���� �߻�(���� �Ҵ����� ���� size���� �ʱ�ȭ���� ������ ����)
//   printf("�Է��� �ּ��� ���ڿ� ũ��� ? \n");
//   scanf("%d", &size);
//   printf("�ּ� �Է� : ");
//   scanf("%s", a);
//   printf("�Էµ� �ּҴ� %s�Դϴ�. \n", a);
//}

//#include <stdio.h>
//#include <stdlib.h>
//#pragma warning(disable:4996)
//void main(void) {
//   int size;
//   char *a;   // ���� �߻�(���� �Ҵ����� ���� size���� �ʱ�ȭ���� ������ ����)
//   printf("�Է��� �ּ��� ���ڿ� ũ��� ? \n");
//   scanf("%d", &size);
//   a = (char*)malloc(sizeof(char)*size); // �޸� ���� �Ҵ�
//   printf("�ּ� �Է� : ");
//   scanf("%s", a);
//   printf("�Էµ� �ּҴ� %s�Դϴ�. \n", a);
//   free(a);
//}


// �޸� ���� �Ҵ��� �� 1
//#include <stdio.h>
//#include <stdlib.h>
//#pragma warning(disable:4996)
//void main() {
//	int* a;
//	a = (int a)malloc(sizeof(int));
//	if (a == NULL) {
//		puts("��� ���� �Ҵ� ����!");
//		exit(1);
//	}
//	*a = 20;
//	printf("���� ����� ���� a : %d\n", *a);
//	free(a);
//
//}


// �޸� ���� �Ҵ��� �� 2
//#include <stdio.h>
//#include <stdlib.h>
//#pragma warning(disable:4996)
//void main() {
//	int size;
//	char* str;
//	printf("���ڿ��� ũ�⸦ �Է��ϼ��� : ");
//	scanf("%d", &size);
//	str = (char*)malloc(size + 1);  //memory allocation --> �������� �ʱ�ȭ���� ����
//	if (str == NULL) {
//		puts("������ �Ҵ� ����!");
//		exit(1);
//	}
//	printf("���ڿ��� �Է��ϼ��� : ");
//	scanf("%s", str); // �������� �Ҵ�� ������(str)�� ���ڿ� ����
//	printf("���� �Ҵ�� �޸𸮿� ����� ���ڿ� : %s\n", str);
//	free(str);
//}


// calloc() �Լ��� ��� �� --> ��� ������ 0���� �ʱ�ȭ
//#include <stdio.h>
//#include <stdlib.h>
//#pragma warning(disable:4996)
//void main() {
//	int i;
//	int* a;
//	a = (int*)calloc(5, sizeof(int));
//	a = (int*)realloc(a, 10 * sizeof(int)); // realloc()�Լ��� ��� ������ ũ�⸦ ���Ҵ�
//	for (i = 0; i < 5; i++) {
//		printf("%d\n", a[i]);
//	}
//	free(a);
//}


// memcmp() �Լ��� ��� ��   memory compare
//#include <stdio.h>
//#include <memory.h>
//void main() {
//	char* s1 = "aaa";
//	char* s2 = "bbb";
//	int stat;
//	stat = memcmp(s1, s2, 3); //s1�� s2�� 3����Ʈ��ŭ ���ؼ� �� ����� stat�� ����
//	printf("%d", stat);
//}


// memcpy() �Լ��� ��� �� memory copy
//#include <stdio.h>
//#include <memory.h>
//#include <string.h>
//void main() {
//	char src[] = "12304567890";
//	char dest[] = "abcdefghijklmnopqrstuvwxyz";
//	char* stat;
//	printf("memcpy() ���� �� dest�� ������ : %s\n", dest);
//	stat = (char*)memcpy(dest, src, strlen(src)); // memcpy() -> src���� src�� ���̸�ŭ dest�� ����
//	if (stat)
//		printf("memcpy() ���� �� dest�� ������ : %s\n", dest);
//	else
//		printf("���� ����\n");
//}


// memset() �Լ��� ��� �� memory setting
//#include <stdio.h>
//#include <memory.h>
//#include <string.h>
//void main() {
//	char s[] = "1230567890";
//	printf("memset() ���� �� s�� ������ : %s\n", s);
//	memset(s, '*', strlen(s)); // ������ s�� ����Ű�� �ִ� ����, '*'��� ��ȣ�� s�� ���̸�ŭ ä���
//	printf("memset() ���� �� s�� ������ : %s\n", s);
//}