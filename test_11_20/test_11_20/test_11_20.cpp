#include<stdio.h>
#include<stdlib.h>
#include<time.h>












//猜数游戏
//int main() 
//{
//	srand(time(0));
//	int number = rand() % 100 + 1;
//	int count = 0;
//	int a = 0;
//	printf("我已经想好了一个1到100之间的数。");
//	do {
//		printf("请猜这个1到100之间数:");
//		scanf_s("%d", &a);
//		count++;
//		if (a > number) {
//			printf("你猜的数大了。");
//		}
//		else if (a < number) {
//			printf("你猜的数小了。");
//		}
//	} while (a != number);
//	printf("太好了，你用了%d次就猜到了答案。\n",count);
//}



//输入一系列数，读到-1时结束，并计算输入的数的个数（除-1），以及它们的平均值
//int main()
//{
//	int number;//指输入的数
//	int sum=0;//输入的数之和
//	int count = 0;//输入的数的数量
//
//	printf("请输入:>");
//	scanf_s("%d", &number);
//	while (number != -1) {
//		sum += number;
//		count++;
//		scanf_s("%d", &number);
//	}
//    printf("总共输入了%d个数，它们的平均值为%f", count, 1.0 * sum / count);
//	return 0;
//}



//二维数组示例
//int main()
//{
//	int arr[3][4] = { 0 };
//	int i = 0;
//	for (i=0; i < 3; ++i)
//	{
//		int j = 0;
//		for (j=0; j < 4; ++j)
//		{
//			arr[i][j] = i * 4 + j;
//		}
//	}
//	for (i=0; i < 3; ++i)
//	{
//		int j = 0;
//		for (j=0; j < 4; ++j)
//		{
//			printf("%d", arr[i][j]);
//			printf("\n");
//		}
//	}
//	return 0;
//}



//一维数组在内存中的储存，看地址
//int main()
//{
//	int arr[10] = { 0 };
//	int i = 0;
//	for (i = 0; i < sizeof(arr) / sizeof(arr[0]); ++i)
//	{
//		printf("&arr[%d]=%p\n", i, &arr[i]);
//	}
//}


//一维数组
//int main(){
//	{
//		int arr[10] = { 0 };
//
//		int sz = sizeof(arr) / sizeof(arr[10]);
//
//		int i = 0;
//		for (i = 0; i < 10; ++i)
//		{
//			arr[i] = i;
//		}
//
//		for (i = 0; i < 10; ++i)
//		{
//			printf("%d", arr[i]);
//		}
//		return 0;
//	}
//
//}


//不同的打印结果
//int main()
//{
//	char arr1[] = "abc";
//	char arr2[3] = { 'a','b','c' };
//	/**/printf("%s\n",arr1);
//	printf("%s\n",arr2);
//}


//未知，可无视
//package com.itcast.test;
//
//
//public class Demo 
//{
//	public static void main(String[] args) 
//	{
//		int[] arr = new int[3];
//
//
//		System.out.println(arr);
//		System.out.println(arr[0]);
//		System.out.println(arr[1]);
//		System.out.println(arr[2]);
//
//		arr[0] = 100;
//		arr[2] = 200;
//
//
//
//		System.out.println(arr);
//		System.out.println(arr[0]);
//		System.out.println(arr[1]);
//		System.out.println(arr[2]);
//	}
//}
