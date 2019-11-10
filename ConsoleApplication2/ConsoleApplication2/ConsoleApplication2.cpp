#include<stdio.h>
#include<string.h>















//for 与while 相比，for更加便捷，因为其三部分较为集中，便于修改

//while循环中break起终止后期循环的作用，continue起终止本次循环的作用
int main() {
	int i = 1;
	while (i <= 10)
	{
		if (i == 5)
           break;/*continue*/
		printf("%d", i);
		i++;
	}
	return 0;
}


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





	
