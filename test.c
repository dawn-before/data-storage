#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//���ʲô
//int main(){
//	char a = -1;
//
//	signed char b = -1;
//
//	unsigned char c = -1;
//
//	printf("a=%d,b=%d,c=%d", a, b, c);
//	return 0;
//}

//int main(){
//	char a = -128;
//	printf("%u\n", a);
//
//	//%d - ��ӡʮ���Ƶ��з�������
//	//%u - ��ӡʮ���Ƶ��޷�������
//	return 0;
//}

//int main(){
//	char a[1000];
//	int i;
//	for (i = 0; i < 1000; i++){
//		a[i] = -1 - i;
//	}
//	printf("%d", strlen(a));
//	return 0;
//}

//unsigned char i = 0;
//int main()
//{
//	for (i = 0; i <= 255; i++){
//		printf("hello world\n");
//	}
//	return 0;
//}

int main(){
	int n = 9;
	float *pFloat = (float *)&n;
	printf("n��ֵΪ��%d\n", n);
	printf("*pFloat��ֵΪ��%f\n", *pFloat);

	*pFloat = 9.0;
	printf("n��ֵΪ��%d\n", n);
	printf("*pFloat��ֵΪ��%f\n", *pFloat);
	return 0;
}