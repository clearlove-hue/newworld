#include<stdio.h>
#include<stdio.h>
int main()//有问题
{
	int i = 0;
	int t;
	int b[] = { 1 };
	int a[] = { 9,5,6,7,1 };
	for (i; i <= 4; i++) {
		t = a[i];
		b[t] = t;
	}printf("%p\n", &b[t]);
}


//int main()
//{
//	int i,j,k;
//	/*printf("请输入需要的高度:>");
//	scanf_s("%d", &n);*/
//	int n = 4;
//	for (int i = 1; i <= 4; i++) 
//	{	
//	     for (k = 1; k <= n - i; k++)
//	     {
//			printf(" ");
//	      }
//		
//	/**/
//	     for (k = 1; k <= 2 * i - 1; k++)
//	     {
//		    printf("*");
//	      }
//	        printf("\n");
//	}
//}	



//int main()
//{
//	for (int i = 1; i <=9; ++i) 
//	{
//		
//		for (int j = 1; j <= 9; ++j) {
//			int x = i * j;
//			printf("%d*%d=%d\t", i, j, x);
//			
//		}printf("\n");
//	}
//	return 0;
//}


//冒泡排序
//void BubbleSort(int a[], int n) {
//	int i, j, temp, flag = 1;
//	for (i = 0; i < n - 1; i++) {
//		flag = 0;
//		for (j = n - 1; j > i; j--) {
//			if (a[j - 1] > a[j]) {
//				temp = a[j];
//				a[j] = a[j - 1];
//				a[j - 1] = temp;
//				flag = 1;
//
//			}
//		}
//	}
//	if (flag == 0)
//		return;
//}


















//选择排序
int max(int a[], int len)
{
	int maxid = 0;
	for (int i = 1; i < len; i++)
	{
		if (a[i] > a[maxid])
		{
			maxid = i;
		}
	}
	return maxid;
}

int main()
{
	int a[] = { 2,3,412,5,2,5,3,1,4,2, };
	int len = sizeof(a) / sizeof(a[0]);
	for (int i = len - 1;i>0; i--)
	{
		int maxid = max(a, i+1);
		int t = a[maxid];
		a[maxid] = a[i];
		a[i] = t;
	}
	for (int i = 0; i < len;i++)
	{
		printf("%d\n", a[i]);
	}
	return 0;
}



//[]为下表访问符
//int main() {
//	int arr[5] = { 1,2,3,4,5 };
//	printf("%d\n", arr[4]);
//	return 0;
//}



//int main(void) 
//{
//		int a[13] = {};
//
//		{
//			int i;
//			for (i = 0; i < 13; i++) {
//				printf("%d\t", a[i]);
//			}
//			printf("\n");
//		}
//		return 0;
//}
	

//C语言在调用函数时，永远只能传值给函数


//void sum(int begin, int end);//函数的声明
//
//int main()
//{
//	sum(1,10);
//	sum(20,30);
//	sum(35,35);
//
//	return 0;
//}
//
//void sum(int begin, int end)   //函数的定义
//{
//	int i;
//	int sum = 0;
//	for (i = begin; i <= end; i++) {
//		sum += i;
//	}
//	printf("%d到%d的和是%d\n", begin, end, sum);
//}


//输入数量不确定的介于0到9之间的数，统计每一种数字出现的次数
//int main(void)
//{
//	const int number = 10;
//	int x;
//	int count[number];
//	int i;
//
//	for (i = 0; i < number; i++) {
//		count[i] = 0;
//	}
//	scanf_s("%d", &x);
//	while (x != 1) {
//		if (x >= 0 && x <= 9) {
//			count[x]++;
//		}
//		scanf_s("%d", &x);
//	}
//	for (i = 0; i < number; i++) {
//		printf("%d:%d\n", i, count[i]);
//	}
//	return 0;
//}



//计算输入的数字的平均数，并显示出所有大于平均数的数
//int main() 
//{
//	int x; 
//	double sum = 0;
//	int cnt = 0;
//	int number[100];
//	scanf_s("%d", &x);
//	while (x != -1) {
//		number[cnt] = x;
//		//监测上一步是如何工作的
//		{
//			int i;
//			for (i = 0; i <= cnt; i++) {
//				printf("%d\t", number[i]);
//			}
//			printf("\n");
//		}
//		//
//		sum += x;
//		cnt++;
//		scanf_s("%d", &x);
//	}
//	if (cnt > 0) {
//		printf("%lf\n", sum / cnt);
//		int i;
//		double average = sum / cnt;
//		for (i = 0; i < cnt; ++i) {       //
//			if (number[i] > average) {    // 这一部分称为‘遍历数组’
//				printf("%3d", number[i]); //
//			}
//		}
//	}
//}

