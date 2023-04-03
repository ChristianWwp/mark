// ConsoleApplication11.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>

#include <iostream>
#include <set>
#include <map>
#include <string>

int main() {
	std::set<int> numbers;
	std::map<int, std::string> number_strings;

	// Get input from user and add to set
	std::cout << "Enter a set of numbers (enter -1 to stop):\n";
	int number;
	while (true) {
		std::cin >> number;
		if (number == -1) {
			break;
		}
		numbers.insert(number);
	}

	// Prompt user for a number and check if it's in the set
	std::cout << "Enter a number to check if it's in the set:\n";
	std::cin >> number;
	if (numbers.count(number) > 0) {
		std::cout << "The number is in the set.\n";
	}
	else {
		std::cout << "The number is not in the set.\n";
	}

	// Prompt user for a number to erase if it's in the set
	std::cout << "Enter a number to erase if it's in the set:\n";
	std::cin >> number;
	if (numbers.erase(number) > 0) {
		std::cout << "The number was erased from the set.\n";
	}
	else {
		std::cout << "The number was not found in the set.\n";
	}

	// Associate strings with numbers in the set
	for (int n : numbers) {
		std::string s;
		std::cout << "Enter a string to associate with " << n << ":\n";
		std::cin >> s;
		number_strings[n] = s;
	}

	// Display contents of the map
	std::cout << "The map contains:\n";
	for (auto it = number_strings.begin(); it != number_strings.end(); ++it) {
		std::cout << it->first << "\t" << it->second << "\n";
	}

	// Prompt user for a number and display its associated string
	while (true) {
		std::cout << "Enter a number to display its associated string (enter -1 to stop):\n";
		std::cin >> number;
		if (number == -1) {
			break;
		}
		auto it = number_strings.find(number);
		if (it != number_strings.end()) {
			std::cout << "The associated string is: " << it->second << "\n";
		}
		else {
			std::cout << "The number was not found in the map.\n";
		}
	}

	// Prompt user for a string and change the associated value in the map
	while (true) {
		std::cout << "Enter a number to change its associated string (enter -1 to stop):\n";
		std::cin >> number;
		if (number == -1) {
			break;
		}
		auto it = number_strings.find(number);
		if (it != number_strings.end()) {
			std::string s;
			std::cout << "Enter the new string to associate with " << number << ":\n";
			std::cin >> s;
			it->second = s;
			std::cout << "The new associated string is: " << it->second << "\n";
		}
		else {
			std::cout << "The number was not found in the map.\n";
		}
	}

	return 0;
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
