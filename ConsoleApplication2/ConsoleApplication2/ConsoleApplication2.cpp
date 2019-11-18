#include<stdio.h>
#include<string.h>
#include<stdbool.h>
#include<stdlib.h>
#include<time.h>










//面试题10   猫生崽(斐波那契数列)
//int Fib(int x)
//{
//	if (x == 1 || x == 2) {
//		return 1;
//	}return (Fib(x - 1) + Fib(x - 2));
//}
//int main()
//{
//	int i, y;
//	printf("请输入时间（几个月）:>");
//	scanf_s("%d", &i);
//	y = Fib(i - 1) + Fib(i - 2);
//	printf("%d", y);
//}



//void menu(){
//printf("**********************\n");
//printf("******1.开始游戏******\n");
//printf("******0.退出游戏******\n");
//printf("**********************\n");
//  
//}
//void game()
//{
//	int guess = 0;
//	int ret;
//	//printf("猜数字\n");
//	ret = rand()%100+1;
//	//printf("%d\n", &ret);
//	while (1)
//	{
//		printf("请输入要猜的数字:>");
//		scanf_s("%d", &guess);
//		if (guess < ret)
//		{
//			printf("猜小了\n");
//		}
//		else if (guess > ret)
//		{
//			printf("猜大了\n");
//		}
//		else
//		{
//			printf("恭喜你，猜对了\n");
//			break;
//		}
//	}
//}
//int main()
//{
//	int input;
//	srand((unsigned int)time(NULL));
//	do
//	{
//		menu();
//		printf("请选择:>");
//		scanf_s("%d", &input);
//		switch (input)
//		{
//		case 1:
//			game();
//			break;
//		case 0:
//			printf("退出游戏\n");
//			break;
//		default:
//			printf("选择错误\n");
//			break;
//		}
//	} while (input);
//	return 0;
//}





//面试题11
//int main()//[]下标引用操作符
//{
//	int a[2][3]/**/= {1,2,3,4,5,8} ;
//	int(*p)[3] = a;
//    int* q = *a;
//    printf("%d\n", a[1][2] );
//	
//	printf("%d\n", *(q + 5));
//	
//	printf("%d\n",(q+2)[3]);
//	printf("%d\n",(q+1)[4]);
//	
//	printf("%d\n",(*p)  [5]);
//    printf("%d\n",(*p + 1)[4]); 
//    printf("%d\n",(*p + 2)[3]);
//    printf("%d\n",(*p + 3)[2]);
//	printf("%d\n",(*p + 4)[1]);
//	printf("%d\n",(*p + 5)[0]);
//	printf("%d\n",(*p + 6)[-1]);
//	printf("%d\n",(*p + 7)[-2]);
//	printf("%d\n",(*p + 8)[-3]);
//	printf("%d\n", (*p + 10000)[-9995]);
//
//	printf("%d\n",q[5]);
//
//
//	printf("%p,%p,%p\n", q,a,*p);
//}













//int main()
//{
//	int arr[3][4] = { 1,2,3,4,5,7 };
//	int i = 0;
//	for (i = 0; i < 3; i++)
//	{
//		int j = 0;
//		for (j = 0; j < 4; j++)
//		{
//			printf("%d ", arr[i][j]);
//
//
//		}printf("\n");
//	}
//}

	
	
	//int main()
//{
//	int a[3][2] = {1,2};
//	int i = 0;
//	for (i = 0; i <3; i++)
//	{
//		int j = 0;
//		for (j = 0; j < 2; j++)
//		{
//			printf("%d ",a[i][j]);
//		}
//		printf("\n");
//	}
//}



/*for (i = 0; i < 4; i++)
	{
		int j = 0;
		for (j = 0; j < 4; j++)
		{
			printf("%d", arr[i][j]);

		}
	}
	return 0;*/
//}










//int main()
//
//{
//	int a[2][3];
//	int(*p)[3] = a;
//	printf("%p", a[0][1]);
//	printf("\n");
//	printf("%p", *p);
//}










//int main()
//{
	/*int arr[10] = { 0 };
	printf("%d\n", sizeof(arr)/sizeof(arr[0]));*/
	
	 
	/*int arr[10] = { 1,2,3,4,5 };
	printf("%p\n", arr);
	printf("%p\n", &arr[0]);
	printf("%d\n", *arr);
	return 0;*/
//}














//int main()
//{
//	int a[2][3] = {1,2,3,4,5,6};
//	/*int(*p)[3] = a;
//	int *q = *a;*/
//	printf("%d",a[1][2]);
//}











//九九乘法表
//int main()
//{
//	int i, j;
//	for (i = 1; i <= 9; i++) {
//		for (j = 1; j <= 9; j++)                     //i,j控制 行 和 列 
//			printf("%d*%d=%2d\t", i, j, i*j);       //%2d控制宽度为两个字符，且右对齐；如果改为%-2d则为左对齐
//		printf("\n");                                //    \t为tab缩进
//	}
//	return 0;
// } 






//面试题12
//int main()
//{
//    struct sta
//	{
//
//		int a; char c;
//		short d; int b;
//    };
//	printf("%d", sizeof(sta));
//}

//面试题15
//int main()
//{
//	printf("%x", -1);
//}

//int main()
//{
//	int Time = 2019;
//  Time = /*Time < 2016 ? Time : */2016;
//	printf("马上到达%d年", Time);
//	return 0;
//}






//面试题3
//int main()
//{
//	int x = 5, y = 2, z = 1;
//	int i = (--y <= z++);
//	printf("%d %d %d", i, y, z);
//}




//面试题4
//int main()
//{
//	int len=strlen("20\010019\0sta\0");
//	printf("%d",len);
//}
















 



 



//面试题9
//int main()
//{
//	
//	
//	
//	
//	
//	
//}





















//面试题8
//int main()
//{
//	
//	float x;//double
//	printf("请输入所需验证数字:>");
//	scanf_s("%f", &x);//%lf
//	if (x == 1)
//	{
//		printf("通过申请\n");
//	}
//	
//	
//	else if (x > 1)
//	{       int i = 1;
//			for (i; i < x;  i)
//		{
//			i *= 2;
//			
//		}
//		if (i == x) { printf("通过申请\n"); }
//		else { printf("滚蛋\n"); }
//		
//	}
//
//
//    else if (0 < x && x < 1)
//	{
//		
//		for (int i=2; x < 1;x)
//		{
//			x *= i;
//		 }
//		
//		if (x == 1)
//		{
//			printf("通过申请\n");
//		}
//		else { printf("滚蛋\n"); }
//	}
//	
//	else
//	{
//		printf("滚蛋\n");
//	}
//}
	













//#define f(x) ((x)*(x))
//int main()
//{
//	int a = 1, b = 2;
//	printf("%d", f(a + b));
//	
//}









//int binary_search(int arr, int k)
//{
//	int left = 0;
//	int right = sizeof(arr) / sizeof(arr[0]) - 1;
//
//	while (left <= right)
//	{
//
//
//
//
//
//		int mid = (left + right) / 2;
//		if (arr[mid] > k)
//		{
//			right = mid - 1;
//		}
//		else
//		{
//			left = mid + 1;
//		}
//
//
//		return mid;
//	}
//}
//
//
//
//
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int k = 7;
//	int ret = binary_search(arr, k);
//	
//	if (ret == -1)
//	{
//		printf("没找到\n");
//	}
//	else
//	{
//		printf("找到了\n");
//	}
//		
//		return 0;
//}








//void Swap(int x,int y)
//{
//	int z = 0;
//	z = x;
//	x = y;
//	y = z;
//            
//}
//void Swap2(int* pa, int* pb)
//{
//	int tmp = *pa;
//	*pa = *pb;
//	*pb = tmp;
//
//}
////形参是实参的一份临时拷贝，改变形参并不会改变实参
//
//
//
//int main()
//{
//	int a = 10;
//	int *p = &a;
//	*p = 10;
//	int b = 20;
//	
//	
//	printf("a=%d b=%d", a, b);
//	Swap2(&a,& b);
//	printf("a=%d b=%d", a, b);
//
//}











//int get_max(int x, int y)
//{
//	if (x > y)
//		return x;
//	else
//	    return y;
//}
//
//
//
//
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int max=get_max(a, b);
//	printf("max=%d\n", max);
//	return 0;
//}








//int main()
//{
//	char arr[] = "hello bit";
//	memset(arr, '*', 5);
//	printf("%s/n", arr);
//	return 0;
//}








//int main()
//{
//	char arr1[20] = "############";
//	char arr2[] = "bit";
//	strcpy_s(arr1, arr2);
//	printf("%s\n", arr1);
//	return 0;
//}










//int main()
//{
//	char input[20] = { 0 };
//	system("shut down -s -t 60");
//again:
//	printf("请注意，你的电脑在1分钟内关机，如果输入：我是猪，就取消关机\n");
//	scanf_s("%s", input);
//	if (strcmp (input,"我是猪")==0)//string compare
//	{
//		system("shut down -a");
//	}
//	else {
//		goto again;
//	}
//	return 0;
//}








//
//

//判断是否为平年
//bool IsLeap(int year)
//{
//	if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)
//		return true;
//	return false;
//}
//void main()
//{
//	int year;
//	bool flag;
//	while (1)
//	{
//		printf("year>:");
//		scanf_s("%d", &year);
//		flag = IsLeap(year);
//		if (flag)
//		{
//			printf("%d is Leap.\n", year);
//		}
//		else
//		{
//			printf("%d is not Leap.\n", year);
//		}
//	}
//
//}







//
//判断是否为素数
//bool IsPrime(int value)
//{
//	for (int i = 2; i < value;++i)//i设置以2开头，因为素数定义为除1和它本身外其余均不能整除情况。
//	{
//		if (value % i == 0)//如若==0.则表示能够除尽，即不是素数
//			return false;
//	}//让value除以2~(value-1)的所有数，若能除尽，则不是素数；若不能除尽，则为素数。
//	return true;
//}
//void main()
//{
//	int num;
//	bool flag;
//	while (1)//while(1)中1代表一个常量表达式，让循环一直执行下去，效果为使用 alt+f5 调试时，可不断输入待检测数字
//	{
//		printf("num:>");
//		scanf_s("%d", &num);
//		flag = IsPrime(num);
//		if (flag)
//		{
//			printf("%d is Prime.\n", num);
//		}
//		else
//		{
//			printf("%d is not Prime.\n", num);
//		}
//	}
//}


//int main()
//{
//	int arr[10] = { 0 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		arr[i] = 1;
//	}
//	for (i = 0; i < 10; ++i)
//	{
//		printf("%d", arr[i]);
//	}
//	return 0;
//}


//void main()
//{
//	int ar[3][3] = { 1,2,3,4,5,6,7,8,9 };
//	for (int i = 0; i < 3; ++i)
//	{
//		for (int j = 0; j < 3; ++j)
//		{
//			printf("%d", ar[i][j]);
//		}
//		printf("\n");
//	}
//}



//int Fib(int n)
//{
//	if (n==1 || n==2)
//		return 1;
//	else
//		return Fib(n - 1) + Fib(n - 2);//斐波拉契数列的定义函数
//}















//size_t mt_strlen(const char* string)
//{
//	if (*string == '\0')
//		return 0;
//	else
//		return my_strlen(++string) + 1;
//}





















//阶乘
//int Factorial(int n)
//{
//	if (n == 1)
//		return 1;
//	else
//		return n*Factorial(n - 1);
//}














//#define OK
//
//#ifdef OK
//void fun()
//{
//	printf("this is fun.\n");
//}
//#define OK
//void fun()
//{
//    printf("this is not fun.\）;












//for 与while 相比，for更加便捷，因为其三部分较为集中，便于修改

//while循环中break起终止后期循环的作用，continue起终止本次循环的作用
//int main() {
//	int i = 1;
//	while (i <= 10)
//	{
//		if (i == 5)
//           break;/*continue*/
//		printf("%d", i);
//		i++;
//	}
//	return 0;
//}


//linux面试题1
//int i;
//int main(int argc, char* argv[])
//{
//	i--;
//	if (i > sizeof(i))
//	{
//		printf(">\n");
//	}
//	else
//	{
//		printf("<\n");
//	}
//	return 0;
//}



//int main()
//{
//	int day
//	printf("输入一个小于7的整数")；
//    scanf_s("")
// 	
//	switch (day)
//	{
//	case 1:
//		printf("星期一\n");
//		break;
//	case 2:
//		printf("星期二\n");
//		break;
//	case 3:
//		printf("星期三\n");
//		break;
//	case 4:
//		printf("星期四\n");
//		break;
//	case 5:
//		printf("星期五\n");
//		break;
//	case 6:
//		printf("星期六\n");
//		break;
//	case 7:
//		printf("星期天\n");
//		break;
//    default:
//	   printf("error\n");
//	}
//	return 0;
//}


//不完备的时间差计算
//int main() {
//	int hour1, minute1;
//	int hour2, minute2;
//	scanf_s("%d %d",&hour1,&minute1);
//	scanf_s("%d %d",&hour2,&minute2);
//	int ih = hour2 - hour1;
//	int im = minute2 - minute1;
//	if (im < 0) {
//		im = 60 + im;
//		ih--;
//	}
//	printf("时间差是%d小时%d分\n", ih, im);
//}


//struct Stu
//{
//	char name[20];
//	int  age;
//	char sex[5];
//	char id[15];
//};
//
//struct Stu s = { "张三"， 20， "男"， "20180101" };
////.为结构成员访问操作符
//printf("name = %s age = %d sex = %s id = %s\n", s.name, s.age, s.sex, s.id);
////->操作符
//struct Stu* ps = &s;
//printf("name = %s age = %d sex = %s id = %s\n", ps->name, ps->age, ps->sex, ps->id);





	
