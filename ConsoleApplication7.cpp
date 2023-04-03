// ConsoleApplication7.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

// Function declarations
void function1(int);
void function2(int*);

int main() {
	int number = 10;

	// Display the contents of number to the screen
	printf("Value of number is: %d\n", number);

	// Display the address of variable number to the screen
	printf("Address of number is: %p\n", (void *)&number);

	// Call function1
	function1(number);

	// Display the contents of number to the screen
	printf("Value of number after call to function1 is: %d\n", number);

	// Call function2
	function2(&number);

	// Display the contents of number to the screen
	printf("Value of number after call to function2 is: %d\n", number);

	return 0;
}

void function1(int number)
{
	// Increment number by one
	number++;

	// Display the contents of number to the screen (should be 11)
	printf("Value of number in function1 is: %d\n", number);

	// Display the address of number to the screen
	printf("Address of number is: %p\n", (void *)&number);
}

void function2(int* numberPtr)
{
	// Display the address of number to the screen (should be the same address as you displayed first in main)
	printf("Address of number is: %p\n", (void *)numberPtr);

	// Display the value that the pointer numberPtr points to
	printf("Value of number in function2 is: %d\n", *numberPtr);

	// Increment the value stored in number
	(*numberPtr)++;

	// Display the contents of number to the screen
	printf("Value of number after increment in function2 is: %d\n", *numberPtr);
}



















// 运行程序: Ctrl + F5 或调试 >“开始执行(不调试)”菜单
// 调试程序: F5 或调试 >“开始调试”菜单

// 入门使用技巧: 
//   1. 使用解决方案资源管理器窗口添加/管理文件
//   2. 使用团队资源管理器窗口连接到源代码管理
//   3. 使用输出窗口查看生成输出和其他消息
//   4. 使用错误列表窗口查看错误
//   5. 转到“项目”>“添加新项”以创建新的代码文件，或转到“项目”>“添加现有项”以将现有代码文件添加到项目
//   6. 将来，若要再次打开此项目，请转到“文件”>“打开”>“项目”并选择 .sln 文件
