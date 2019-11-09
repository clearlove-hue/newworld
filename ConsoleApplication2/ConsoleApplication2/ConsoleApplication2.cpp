#include<stdio.h>
#include<string.h>
//适当使用{  }可以使代码逻辑更清晰
//int main()
//{
//	int a = 0;
//	int b = 2;
//	if (a == 1)
//	{
//		if (b == 2)
//		{
//			printf("hehe\n");
//		 }
//	 }
//	else
//	{
//		printf("haha\n");
//	 }
//	return 0;
//}













// if语句用法示例         其中if与if else中间的{  }为代码块，若执行多条语句，正常编译即可
//int main() {
//	int age = 0;
//	scanf_s("%d", &age);
//	if (age < 18)
//	{
//		printf("少年\n");
//	  //printf("温正臣是海王\n");
//	}
//	else if(age>=18 && age<30)
//	{
//		printf("青年\n");
//	}
//	else if (age >= 30 && age < 50) 
//	{
//		printf("中年\n");
//	}
//	else if (age >= 50 && age < 80)
//	{
//		printf("老年\n");
//	}
//	else 
//	{
//		printf("老不死\n");
//	}
//	return 0;
//}



//结构体初始化
//struct stu
//{
//	char name[20];
//	int  age;
//	char sex[5];
//	char id[15];
//};
//
//int main() {
//	struct Stu s = { "李国玉",17,"男","04193129" };
//
//	printf("name=%s age=%d sex=%s id=%s\n", s.name, s.age, s.sex, s.id);
//
//	int main(struct Stu* ps = &s);
//
//	printf("name=%s age=%d sex=%s id=%s\n", ps->name, ps->age, ps->sex, ps->id);
//}



//int main()
//{
//	printf("%d\n", sizeof(char*));//4
//	printf("%d\n", sizeof(short*));//4
//	printf("%d\n", sizeof(int*));//4
//	printf("%d\n", sizeof(double*));//4
//	return 0;
//}
	

//int main()
//{
//	char ch = 'w';
//	char* pc = &ch;
//	*pc = 'q';
//	printf("%c\n", ch);
//	return 0;
//}

	
	/*int num = 10;
	int* p = &num;
	*p = 20;
	return 0;*/
	
	/*&num;
    printf("%p\n", &num);
	return 0;*/
//}


//#define MAX 1000
//#define ADD(x,y)((x)+(y))
//
//#include<stdio.h>
//int main()
//{
//	int sum = ADD(2, 3);             //定义宏和使用函数进行应用大体一致，
//	printf("sum = %d\n", sum);       //但便捷性以及应用规范不同
//	sum = 10 * ADD(2, 3);
//	printf("sum = %d\n", sum);
//	return 0;
//}


//int g_val = 2018;
//int main()
//{
//	printf("%d\n", g_val);
//	return 0;
//}
                                   //static修饰全局变量示例
//static int g_val = 2018;
//int main()
//{
//	printf("%d\n", g_val);
//	return 0;
//}


//int i;
//void test()
//{
//	/*static*/ int i = 0;                 //1111111111       /*12345678910*/
//	i++;
//	printf("%d", i);            //函数中局部变量的值在函数调用结束之后不会消失
//}                             //static可以让for循环中的i在void test()中继续使用
//int main()
//{
//	for (i = 0; i < 10; i++)
//	{
//		test();
//	}
//	return 0;
//}



//整型的每一种都有 无符号（unsigned）和 有符号（signed）两种类型（float和double总是带符号的），
//在默认情况下声明的整型变量都是有符号的类型（char有点特别），如果需声明的无符号类型的话就需要在
//类型前加上unsigned



//typedef应用（类型重命名）
//typedef unsigned int uint_32;
//
//int main()
//{
//	unsigned int num1 = 0;
//	uint_32 num2 = 0;
//	return 0;
//}


//数组应用实例
//int main() {
//	int i = 0;
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d", arr[i]);
//	}
//	printf("\n");
//	return 0;
//}

//自定义函数进阶应用
//int Add(int a, int b)
//{
//	int k = a + b;
//	return k;
//}
//int main() {
//	int num1=0;
//	int num2=0;
//	int sum = 0;
//	printf("输入两个操作数:>");
//	scanf_s("%d %d", &num1, &num2);
//	sum = Add(num1,num2);
//	printf("sum=%d\n", sum);
//	return 0;
//}


//自定义函数基础示例
/*static*/ /*int Add(int x, int y) {
	return x + y;
}
int main() {
	
	printf("%d\n",Add(1,2) );
	return 0;
}*/


//探究字符长度
//#include<string.h>
//int main(){
//	printf("%d\n", strlen("abcdef"));
//	printf("%d\n", strlen("c:\test\328\test.c"));
//	return 0;
//	}


//循环至规定数字
//int main() {
//	printf("加入我们\n");
//	int line = 0;
//	while (line <= 20000)
//	{
//		line++;
//		printf("继续努力");
//	}
//	if (line > 20000)
//		printf("继续坚持");
//	return 0;
//}


//突出'\0'的重要性
//int main() 
//{	char arr1[] = "bit";
//	char arr2[] = { 'b','i','t' };
//	char arr3[] = { 'b','i','t','\0' };
//	printf("%s\n", arr1);
//	printf("%s\n", arr2);
//	printf("%s\n", arr3);
//	return 0;
//}


//{
//	int a, b;
//	printf("输入两个操作数:>");
//	scanf_s("%d %d ", &a, &b);
//	int num1 = a;                                                                //scanf_s()只能做输入语句
//	int num2 = b;                                                                //printf()只能做输出语句
//	int sum = 0;
//	
//	sum = num1 + num2;
//	printf("sum = %d\n", sum);
//	return 0;
//}
				  
				  
				  
//变量
//int global = 2019;//全局变量
////int main()
//{
//	int local = 2018;//局部变量
//	//下面定义的global会不会有问题？
//	int global = 2020;//局部变量
//	printf("global = %d\n", global);
//	return 0;
//}




                //求各种数据类型的大小
//int main() {
//	printf("%d\n", sizeof(char));                 //1
//	printf("%d\n", sizeof(short));                //2
//	printf("%d\n", sizeof(int));                  //4
//	printf("%d\n", sizeof(long))				  //4
//	printf("%d\n", sizeof(float))                 //4
//  printf("%d\n", sizeof(long long))             //8
//	printf("%d\n", sizeof(double))                //8
//	printf("%d\n", sizeof(long double))           //8
//	return 0;
//}

     
//for循环	
//#include<stdio.h>
//int main() {
//	int a=0 ,b;
//	scanf_s("%d", &b);
//	for (a = 0; a <= b; a++);//下条执行后执行a++
//		printf("a=%d", a);//当上面条件满足时执行
//		
//	return 0;
//}	*/
                 
//你好世界hello world
//{
//	printf("hello world");
//}
	
