#include<stdio.h>
//��ӡ����(�߶�ֻ��Ϊ����)
int main() {
	int a,i, j,l,k;
	printf("��������Ҫ���εĸ߶�(ֻ��������):>");
	scanf_s("%d", &a);
	for (i = 1; i < (a-1)/2+1; ++i){
		for (j = 0; j < a/2+1-i; ++j) {
			printf(" ");
		}
		for (k = 0; k < 2*i-1; ++k) {
			printf("*");
		}
		printf("\n");
	}
	for (l = 0; l < a; ++l) {
		printf("*");
	}
	printf("\n");
	int m, n, u;
	for (m = (a+1)/2+1; m <a + 1; ++m) {
		for (n = 0; n < -(1+a)/2+m; ++n) {
			printf(" ");
		}
		for (u = 0; u < 2*(a + 1 - m)-1; ++u) {
			printf("*");
		}
		printf("\n");
	}
}