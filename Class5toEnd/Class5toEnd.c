// 6��
// �Լ�


// #include <math.h>�� �ʼ��� - ���� ����

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


//#include <string.h>�� �ʼ���-���ڿ�ó��
//#include <ctype.h>�� �ʼ���-�������� �Ǻ�
//#include <stdio.h>
//#include <string.h>
//#include <ctype.h>
//void main() {
//	int i, alp=0, no = 0, et = 0;
//	char s[20];
//	printf("����");
//	scanf("%s", s);
//	for (i = 0; i < strlen(s); i++) { //strlen() ���ڿ� ���� �Լ�
//		if (isalpha(s[i])) // isalpha() ������ ���� Ȯ�� �Լ�
//			alp++;
//		else if (isdigit(s[i])) // isdigit() ���� ���� Ȯ�� �Լ�
//			no++;
//		else
//			et++;
//	}
//	printf("���ĺ� = %d\n", alp);
//	printf("���� = %d\n", no);
//	printf("��Ÿ = %d\n", et);
//}


//����� ���� �Լ�
//#include <stdio.h>
//int sum(int_a, int_b); // 1) �Լ��� ���� ����
//void main() {
//		int x, y, c;
//	scanf("%d %d", &x, &y);
//
//	c = sum(10, 20); // 2) �Լ��� ȣ��
//	printf("%d\n", c);
//	printf("x+y = %d", sum(x, y));
//}
// int sum(int a, int b) {   //3) �Լ��� ���� - ������ ��� ��ȯ���� ������ int, ������ void
//	 int d;
//	 d = a + b;
//	 return(d);
// }


// Return�� ��� ����
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



// �Լ��� ���� ���� ��� ��
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
//	printf("�Լ��� ���� ���� ��� ���\n");
//}
//int sum(int a, int b) {
//	int i, s = 0;
//	for (i = a; i <= b; i++)
//		s = s + i;
//	return s;
//}



// 7��

// �Ű����� ������ �ڷ� ���� - ���� ���� �ڷ� ����
//#include <stdio.h>
//void swap(int x, int y);
//void main() {
//	int a = 3, b = 5;
//	printf("ȣ�� �� a = %d, b = %d\n", a, b);
//	swap(a, b);
//	printf("ȣ�� �� a = %d, b = %d\n", a, b);
//}
//void swap(int x, int y) {
//	int temp;
//	temp = x;
//	x = y;
//	y = temp;
//	printf("�Լ� �� x = %d, y = %d\n", x, y);
//}


// �Ű����� ������ �ڷ� ���� - ������ ���� �ڷ� ����
//#include <stdio.h>
//void swap(int x, int y);
//void main() {
//	int a = 3, b = 5;
//	printf("ȣ�� �� a = %d, b = %d\n", a, b);
//	swap(&a, &b);
//	printf("ȣ�� �� a = %d, b = %d\n", a, b);
//}
//void swap(int *x, int *y) {
//	int temp;
//	temp = *x;
//	*x = *y;
//	*y = temp;
//	printf("�Լ� �� x = %d, y = %d\n", *x, *y);
//}


// �������� ��� �� 1
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


// �������� ��� �� 2
//#include <stdio.h>
//void main() {
//	//��� A
//	int x = 2, y = 4;
//	printf("A: x=%d, y=%d\n", x, y);
//	{//��� B
//		int x; // ��� B���� ���Ӱ� �ٽ� ����
//		x = 5;
//		y++; // y�� ���Ӱ� �������� �ʾ����Ƿ� �״�� ����
//		printf("B: x=%d, y=%d\n", x, y);
//	}
//	printf("A: x=%d, y=%d\n", x, y);
//}


// �������� ��� ��
//#include <stdio.h>
//void fcn1();
//int x; //���� ���� ����
//void main() {
//	printf("\n 1) x = %d", x);
//	fcn1();
//	printf("\n 2) x = %d", x);
//}
//void fcn1() {
//	x++; // ���� ���� ���
//}

// �ڵ����� ��� �� (auto, ���� ����)
//#include <stdio.h>
//void main() {
//	int i = 1; //auto�� �����Ǿ�����
//	auto int j = 2;
//	{//���1
//		int i = 3;
//		{//���2
//			int i = 4;
//			printf("��� 2�� i = %d\n", i);
//			printf("��� 2�� j = %d\n", j);
//		}
//		printf("��� 1�� i = %d\n", i);
//
//	}
//}



// �������� ��� �� 1
//#include <stdio.h>
//void main() {
//	int a = 10; // �ڵ� ����
//	static int b = 20; // ��������
//	{
//		int a = 5; // ��� �������� �ڵ� ���� ����
//		printf("a = %d b = %d\n", a, b);
//
//	}
//	printf("a = %d b = %d\n", a, b);
//}

// �������� ��� �� 2
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
//	auto int a = 0; // �ڵ� ������ ȣ��� ������ ���� �ʱ�ȭ ��
//	static int s = 0; // ���� ������ �Լ��� ���������� �� ���� ����
//	printf("auto = %d, static = %d\n", a, s);
//	++a;
//	++s;
//}


// �ܺκ��� ��� �� 1
//#include <stdio.h>
//int i = 10;
//int j = 20;
//void main() {
//	extern int i; // ���� i�� �Լ� �ٱ��� ������ ���� ����Ǿ����Ƿ� ��ü�� ���� ����
//	extern int k; // ���� k�� �Լ� �ٱ��� �����Ƿ� extern int k ���� �� �־���� ��
//	int j = 100;
//	printf("i = %d, j = %d, k = %d", i, j, k);
//
//}
//int k = 50;


//// �ܺκ��� ��� �� 2
//#include <stdio.h>
//#pragma warning(disable:4996)
//void extern_ex();
//char s[100];
//void main() {
//	printf("���ڿ��� �Է��ϼ��� : ");
//	scanf("%s", s);
//	printf("�Է� ���ڿ��� %s�� �������� s�� ����\n", s);
//	extern_ex();
//}
//
//// ������ ���Ͽ����� ����� �� ����
//extern char s[];
//void extern_ex() {
//	printf("�ܺκ��� s���� %s�Դϴ�. \n", s);
//}


// �������� ���� ��� �� - �ڵ� ������ ������ ���, �ݺ� Ƚ���� �����ϴ� ��� CPU�� �������Ͱ� ������ �� ������ �ҷ������� ����
//#include <stdio.h>
//void main() {
//	register int i;
//	int sum = 0;
//	for (i = 0; i <= 10; ++i)
//		sum += i;
//	i -= 1;
//	printf("i = %d sum = %d\n", i, sum);
//}


// 8�� �迭�� ������

// 1���� �迭 ��� ��1
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

// 1���� �迭 ��� ��2
//#include <stdio.h>
//void main() {
//	static int x[] = { 1,2,3,4 };
//	static int y[] = { 10,20,30,40 };
//	int i, z[4];
//	for (i = 0; i < 4; ++i)
//		z[i] = x[i] + y[3 - i];
//	printf("�ݴ� ��ġ�� �迭��� ��\n");
//	for (i = 0; i < 4; ++i)
//		printf("%d + %d = %d\n", x[i], y[3 - i], z[i]);
//}

// 2���� �迭 ��� ��
//#include <stdio.h>
//void main() {
//	static int score[4][3] = { 
//		{90,90,90}, 
//		{80,80,80}, 
//		{70,70,70}, 
//		{60,60,60} };
//	int sum, i, j;
//	printf("��ȣ\t����\t����\t����\t�հ�\n");
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

// char�� �迭�� ��� ��1
//#include <stdio.h>
//void main() {
//	char name[] = "HONG GIL DONG";
//	char adrs1[6] = { 'S', 'E', 'O', 'U', 'L', '\0' };
//	char adrs2[6] = { 'S', 'E', 'O', 'U', 'L' }; // null���� ���� �ڸ��� ������ ���� ���� �� ����
//	printf("\n name : %s", name);
//	printf("\n name : %s", adrs1);
//	printf("\n name : %s", adrs2);
//}

// char�� �迭�� ��� ��2
//#include <stdio.h>
//void main() {
//	char string[50];
//	int i = 0;
//	printf("���ڿ��� �Է��ϼ��� : ");
//	scanf("%s", string);
//	printf("�Է¹��� ���ڿ� : %s\n", string);
//	printf("���� ���� ��� : ");
//	while (string[i] != '\0') {  //scanf�Լ��� char�Է� �� �������� �ڵ����� null�� ����
//		printf("%c", string[i]); 
//		i++;
//	}
//}

// �迭�� �Լ��� �Ű������� ����� ���
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

// ������ - ������ �ּ� ��
//#include <stdio.h>
//void main() {
//	int days = 365;
//	int month = 12;
//	int Table[5] = { 1,2,3,4,5 };
//	printf("days�� �ּҴ� %x\n", &days);
//	printf("month�� �ּҴ� %x\n", &month);
//	printf("�迭�� Table�� �ּҴ� %x\n", Table);
//	printf("�迭�� Table�� ù��° ����� �ּҴ� %x\n", &Table[0]);
//	printf("�迭�� Table�� �ι�° ����� �ּҴ� %x\n", &Table[1]);
//
//}


// �����ͺ����� ��� ��
//#include <stdio.h>
//void main() {
//	int a, b;
//	int *p;
//	a = 5000;
//	p = &a;
//	b = *p;
//	printf("a = %d\n", a); // ���� a
//	printf("p = %x\n", p); // ���� a�� �ּ�
//	printf("b = %d\n", b); // ���� a�� �ּҿ� �ִ� ���� b�� �Է�
//	printf("&b = %x\n", &b); // ���� b�� �ּ�
//}

// ����Ʈ������ ���� ��
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

// void�� �������� ��� ��
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

// ������ ������ �� 1
#include <stdio.h>
void main() {
	int* p, a[] = { 10,20,30,40,50 };
	p = &a[0];
	printf("*p == %d\n", *p)
}