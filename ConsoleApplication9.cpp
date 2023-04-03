// ConsoleApplication9.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

/* function to read number from standard input (keyboard) */
void getNumber(int *);
/* function to calculate the sum of two numbers */
void calculateSum(int, int, int *);
/* function to display details to the screen */
void displayDetails(void);

int main() {
	int num1 = 0; /* first number to be entered by user */
	int num2 = 0; /* second number to be entered by user */
	int sum = 0; /* stores sum of two numbers */
	displayDetails();

	/* prompt for and read first number */
	printf("Please enter first number : ");
	getNumber(&num1);

	/* prompt for and read second number */
	printf("Please enter second number: ");
	getNumber(&num2);

	/* add two numbers together and display to screen */
	calculateSum(num1, num2, &sum);
	printf("\nSum of %d and %d is: %d\n\n", num1, num2, sum);

	return 0;
}

/* function to read number from standard input (keyboard) */
void getNumber(int *num) {
	scanf("%d", num);
}

/* function to calculate the sum of two numbers */
void calculateSum(int number1, int number2, int *sum) {
	*sum = number1 + number2;
}

/* function to display details to the screen */
void displayDetails(void) {
	printf("Author : Your Name\n");
	printf("Stud ID : Your Student Id\n");
	printf("Email ID : Your Email Id\n");
	printf("This is my own work as defined by the\n");
	printf("University's Academic Misconduct Policy.\n\n");
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
