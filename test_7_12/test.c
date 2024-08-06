#include <stdio.h>
// Ctrl + F5 編譯
//int main() 
//{
//	printf("你好呀。\n");
//	printf("123456");
//	return 0;
//}

//int main()
//{
//	printf("你好，C语言\n");// \n 是换行的意思
//	printf("你好，C语言\n");
//	printf("你好，C语言\n");
//	printf("你好，C语言\n");
//	printf("你好，C语言\n");
//
//	return 0;
//}

//int main(int argc, char* argv[]) //其实main函数是有参数的，不想使用的时候，就不写，需要使用的时候，就写上
//{
//	return 0;
//}

//printf 是一个库函数
//功能：是在屏幕上打印信息
//print format - 按照格式来打印
//
//
int main()
{
//	printf("hehe\n");
//	printf("翠花\n");
//
//	//占位符
//	//%d - 整数
//	//%f - 小数(浮点数)
//	//%c - 字符
//	//...
	printf("%d\n", 100);
	printf("%f\n", 3.14);//小数点后默认打印6位
	printf("%c", 'x');

	return 0;
}

//
//printf 是库函数
//使用库函数得包含对应的头文件

// 第一節 2：43：00   Ctrl k c