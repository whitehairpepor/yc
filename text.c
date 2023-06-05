#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//#include<windows.h>
//#include<stdlib.h>
////i/*nt main()
////{
//	int a = 0;
//	int n = 0;
//	int sum = 1;
//	int ret = 0;
//	for (a=1;a<=3;a++)
//	{
//		sum = sum * a;
//		ret = ret + sum;
//	}
//	printf("ret=%d\n", ret);
//	return 0;
//	
//}*/
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int c = 0;
//	int k = 8;
//	c = sizeof(arr) / sizeof(arr[0]);
//	int left = 0;
//	int right = c - 1;
//	while (left <= right)
//	{
//		int sum = (left + right) / 2;
//		if (arr[sum] > k)
//		{
//			right = sum - 1;
//		}
//		else if (arr[sum] < k)
//		{
//			left = sum + 1;
//		}
//		else
//		{
//			printf("zhaodaole;%d\n", sum);
//			break;
//		}
//	}
//	return 0;
//}
//int main()
//{
//	char arr[] = "welcome to you!!!!!!!";
//	char arr1[] = "#####################";
//	int left = 0;
//	int right = strlen(arr) - 1;
//	while (left <= right)
//	{
//		printf("%s\n", arr1);
//		arr1[left] = arr[left];
//		arr1[right] = arr[right];
//		left++;
//		right--;
//		Sleep(1000);
//		system("cls");
//		
//	}
//	return 0;
//
//}
//int main()
//{
//	int i = 0;
//	int a = 1;
//	double sum = 0.0;
//	for (i = 1; i < 100;i++)
//	{
//		sum += a*1.0/ i;
//		a = -a;
//	}
//	printf("%f", sum);
//	return 0;
//}
//int main()
//{
//	int arr[] = { -1,-2,-3,-4,-5,-6,-7,-8,-9,-10 };
//	int i = 0;
//	int a = arr[0];
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	for (i = 1; i < sz; i++)
//	{
//		if (a < arr[i])
//		{
//			a = arr[i];
//		}
//
//	}
//	printf("max=%d\n", a);
//	return 0;
//}
//int main()
//{
//	int x = 0;
//	
//	
//	for (x = 1; x <= 9; x++)
//	{
//		
//		int y = 0;
//		for (y = 1; y <= x; y++)
//		{
//			
//			printf("%d*%d=%-2d ", y,x,x*y);
//		}
//		printf("\n");
//	}
//	return 0;
////}
//#include <stdlib.h>
//#include<time.h>
//void menu()
//{
//	printf("**************\n");
//	printf("**猜游戏数字**\n");
//	printf("**1play 0exit**\n");
//}
// //RAND_MAX-随机数最大值
//void game()
//{
//	int ret = 0;
//	int guess = 0;
//	ret = rand() % 100 + 1;
//	while (1)
//	{
//		printf("请猜数字》：");
//		scanf("%d", &guess);
//		if (guess > ret)
//		{
//			printf("猜大了\n");
//		}
//		else if (guess < ret)
//		{
//			printf("猜小了\n");
//		}
//		else
//		{
//			printf("恭喜你猜对了\n");
//			break;
//		}
//	}
//
//}
//int main()
//{
//	int input;
//	srand ((unsigned int)time(NULL));
//	do
//	{
//		menu();
//		printf("请选择》：");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1:
//			game();
//			printf("start\n");
//			break;
//		case 0:
//			printf("exit\n");
//			break;
//		default:
//			printf("fault\n");
//			break;
//		}
//	} while (input);
//		return 0;
//}
//#include<stdlib.h>
//#include<string.h>
//int main()
//{
//	char input[20] = {0};
//	system("shutdown -s -t 60");
//	again:
//	printf("请注意你的电脑将在1分钟后关机，如果输入你是猪，就取消关机\n请输入》：");
//	scanf("%s", input);
//	if (strcmp(input, "你是猪") == 0)
//	{
//		system("shutdown -a");
//	}
//	else
//	{
//		goto again;
//	}
//	return 0;
//}
//int main()
//{
//	char arr1[] = "bit! dasczxc";
//	memset(arr1, 'i', 5);
//	printf("%s\n",arr1);
//	
//	return 0;
//}
//#include<string.h>
//int main()
//{
//	char arr1[] = "bit";
//	char arr2[40] = "*** ***";
//	strcpy(arr2, arr1);
//	printf("%s\n", arr2);
//	return 0;
//}
//int getmax(int x, int y)
//{
//	if (x > y)
//		return x;
//	else
//		return y;
//}
//int main()
//{
//	int a = 20;
//	int b = 30;
//	int sum = getmax(a, b);
//	printf("%d\n", sum);
//	return 0;
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int tmp = 0;
//	tmp = a;
//	a = b;
//	b = tmp;
//	printf("a=%d b=%d\n", a, b);
//	return 0;
//}
//void get(int x, int y)
//{
//	int tmp = 0;
//	tmp = x;
//	x = y;
//	y = tmp;
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//	printf("a=%d b=%d\n", a, b);
//	get(a, b);
//	printf("a=%d b=%d\n", a, b);
// retrun 0;
//}
//void get1(int *x, int *y)
//{
//	int tmp = 0;
//	tmp = *x;
//	*x = *y;
//	*y = tmp;
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//	printf("a=%d b=%d\n", a, b);
//	 get1(&a, &b);
//	printf("a=%d b=%d\n", a, b);
//	return 0;
//}
//#include<stdlib.h>
//#include<string.h>
//int main()
//{
//	char input[10] = { 0 };
//	system("shutdown -s -t 60");
//	scanf("%s", input);
//	if (strcmp(input,"hello") == 0)
//	{
//		system("shutdown -a");
//	}
//	return 0;
//}
//#include<math.h>
//int pm(int x)
//{
//	int n = 0;
//	for (n = 2; n < sqrt(x); n++)
//	{
//		if (x %n == 0)
//			return 0;
//	}
//			return 1;
//	
//		
//
//	
//}
//int main()
//{
//	int a = 0;
//
//	int c = 0;
//	for (a = 100; a <= 200; a++)
//	{
//		if (pm(a) == 1)
//		{
//			printf(" %d\n", a);
//		}
//	}
//	return 0;
//}
//int leapyear(int a)
//{
//	if ((a % 4 == 0 && a % 100 != 0) || a % 400 == 0)
//		return 1;
//	else
//		return 0;
//}
//int main()
//{
//	int a = 0;
//	for (a = 1000; a <= 2000; a++)
//	{
//		if (leapyear(a) == 1)
//		{
//			printf("%d ", a);
//		}
//	}
//	return 0;
//}
//#include<string.h>
//#include<stdlib.h>
//int main()
//{
//	char input[10] = { 0 };
//	system("shutdown -s -t 60");
//	scanf("%s",input);
//	if (strcmp(input, "he") == 0)
//	{
//		system("shutdown -a");
//	}
//	return 0;
//}
//int my_strlen(char* arr)
//{
//    if (*arr != '\0')
//    {
//        return 1 + my_strlen(arr+1);
//    }
//    else
//        return 0;
//}
//
//int main()
//{
//    char arr[] = "bit";
//    int len = my_strlen(arr);
//    printf("len=%d\n", len);
//    return 0;
//}
//int fid(int x)
//{
//	if (x > 2)
//		return fid(x - 1) + fid(x - 2);
//	else
//		return 1;
//	
//	
//}
//int main()
//{
//	int a = 0;
//	scanf("%d", &a);
//	int len = fid(a);
//	printf("%d", len);
//	return 0;
//
//
// }
//void move(char A, char C, int n)
//{
//	printf("把第%d个圆盘从%c-->%c\n", n, A, C);
//
//}
//void Hanoitower(char A, char B, char C, int n)
//{
//	if (n == 1)
//	{
//		move(A, C, n);
//
//	}
//	else
//	{
//		//将n-1个圆盘从A柱借助C柱移到B柱
//		Hanoitower(A, C, B, n - 1);
//		//将A柱最后一个圆盘移动到C柱
//		move(A, C, n);
//		//将n-1个圆盘从B柱借助于A柱移动到C柱上
//		Hanoitower(B, A, C, n - 1);
//	}
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	//将n个圆盘从A柱借助B柱移动到C柱
//	Hanoitower('A', 'B', 'C', n);
// 	return 0;
//}
//int main()
//{
//	system("shutdown -s -t 60");
//	return 0;
//}
//int main()
//{
//	int arr[][4] = { {1,2,3},{4,5} };
//	int t = 0;
//
//	for (t = 0; t < 3; t++)
//	{
//		int j = 0;
//		for (j = 0; j < 4; j++)
//		{
//			printf("%p\n", &arr[t][j]);
//		}
//	}
//	return 0;
//}
//#include<string.h>
//#include<stdlib.h>
//int main()
//{
//	char input[10] = { 0 };
//	system("shutdown -s -t 60");	scanf ("%s", input);
//	if (strcmp(input, "he") == 0)
//	{
//		system("shutdown -a");
//	}	
//	return 0;
//}
//void sudd_s(int arr[], int sz)
//{
//	int i = 0;//确定冒泡排序的趟数
//	for (i = 0; i < sz - 1; i++)
//	{
//		int flag = 1;//当元素有序时跳出循环
//		int j = 0;
//		int tmp = 0;
//		for (j = 0; j < sz - 1 - i; j++)
//		{
//			//每一趟冒泡排序
//			if (arr[j] > arr[j+1])
//			{
//				tmp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = tmp;
//				flag = 0;
//			}
//		}
//		if (flag == 1)
//		{
//			break;
//		}
//	}
//}
//int main()
//{
//	int arr[] = { 9,8,7,6,5,3,4,2,1 };
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);//10个元素，/0也算进去的。
//	sudd_s(arr, sz);//arr数组进行传参，实际传过去的是arr数组的首元素的地址，所以要把sz总元素个数传过去。
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d", arr[i]);
//	}
//	return 0;
//}
//int main()
//{
//	int arr[] = { 0,1,2,3,4,5,8 };
//	printf("%p\n", arr);
//	printf("%p\n", arr+1);
//	printf("%p\n", &arr[0]);
//	printf("%p\n", &arr[0 + 1]);
//	printf("%p\n", &arr);
//	printf("%p\n", &arr+1);//取地址符号代表的不是首个元素，是整个数组单位为字节，sizeof也是代表的是整个数组。
//	printf("%p\n", *arr);//解引用符号
//	printf("%p\n", *arr+1);
//}
//#include<stdlib.h>
//int main()
//{
//	char a = '0';
//	
//	system("shutdown -s -t 60");
//	scanf("%s", a);
//	if (a == 'w')
//	{
//		system("shutdown -a");
//	}
//	return 0;
//
//}
//#include "game.h"
//void meun()
//{
//	printf("***************************\n");
//	printf("*******1.play  0.exit******\n");
//	printf("***************************\n");
//}
//void ganme()
//{
//	char ret = 0;
//	//数组存放走出的棋盘信息
//	char o[row][red] = { 0 };//全部空格
//	//初始化棋盘
//	inb(o, row, red);
//	//打印棋盘
//	dib(o, row, red);
//	//下棋
//	while (1)
//	{
//		playganme(o, row, red);//玩家下棋
//		dib(o, row, red);
//	
//		//判断玩家是否赢
//		ret=IsWin(o,row,red);
//		if (ret != 'c')
//		{
//			break;
//		}
//		computermove(o, row, red);//电脑下棋
//		dib(o, row, red);
//        //判断电脑是否赢
//		ret=IsWin(o,row,red);
//		if (ret != 'c')
//		{
//			break;
//		}
//
//	}
//	if (ret == '*')
//	{
//		printf("player Win");
//	}
//	if (ret == '#')
//	{
//		printf("computer Win");
//	}
//	else
//	{
//		printf("wu");
//	}
//}
//void test()
//{
//	int i = 0;
//	rand((unsigned int)time(NULL));
//	do
//	{
//		meun();
//		scanf("%d", &i);
//		switch (i)
//		{
//		case 0:
//				printf("exitganme\n");
//				break;
//		case 1:
//			ganme();
//			break;
//		default:
//			printf("reselect\n");
//			break;
//		}
//	} while (i);
//}
//int main()
//{
//	test();
//	return 0;
//}
//int main()
//{
//	int a = 1;
//	int b = 10;
//	int c = 0;
//	c = a;
//	a = b;
//	b = c;
//	printf("%d %d\n", a, b);
//	return 0;
//}
//不是有临时变量调换两数的值
//#include<limits.h>
//int main()
//{
//	int a = 1;
//	int b = 10;
//	INT_MAX;//2147483647-超过这个值就会溢出
//	a = a + b;
//	b = a - b;
//	a = a - b;
//	printf("%d %d\n", a, b);
//	return 0;
//}
//int main()
//{
//	int a = 1;
//	int b = 10;
//	a = a ^ b;
//	b = a ^ b;
//	a = a ^ b;
//	printf("%d %d\n", a, b);
//	return 0;
//}
//int main()
//{
//	int arr[] = { 0,1,2,3,4,5,0,1,2,3,4,5,7 };
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	for (i = 0; i < sz; i++)
//	{
//		int j = 0;
//		int count = 0;
//		for (j = 0; j < sz; j++)
//		{
//			if (arr[i] == arr[j])
//			{
//				count++;
//			}
//		}
//		if (count == 1)
//		{
//			printf("%d\n", arr[i]);
//		}
//	}
//    return 0;
//}
//优化后
//int main()
//{
//	int arr[] = { 1,2,3,4,5,1,2,3,4 ,5,7};
//	int i = 0;
//	int b = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	for (i = 0; i < sz; i++)
//	{
//		b = arr[i] ^ b;
//	}
//	printf("%d\n", b);
//	return 0;
//}
//#include<stdlib.h>
//#include<string.h>
//int main()
//{
//	char input[10] = { 0 };
//	system("shutdown -s -t 60");
//	aout:
//	printf("电脑将在60s后关机请输入hello\n");
//	scanf("%s", input);
//	if (strcmp(input,"hello") == 0)
//	{
//
//		system("shutdown -a");
//	}
//	else
//	{
//		goto aout;
//	}
//	return 0;
//}