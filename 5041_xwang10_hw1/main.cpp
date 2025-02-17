/**
* @author: Xiaoyu Wang on 1/12/25/
 * @version: 1.0
 * This program is designed to check some C++ basics.
 */
#include <iostream>
#include <string>
#include <random>
using namespace std;

// create fibonacci number in recursive way
int fibonacci(int n) {
	if (n <= 1) {  // base case
		return n;
	}
	return fibonacci(n - 1) + fibonacci(n - 2);
}

int main()
{
	// 1. Starting with a string of "Hello, world!", reverse that string and print it out.
    string str = "Hello, world!";
	cout << str << endl;

	reverse(str.begin(), str.end());
	cout << str << endl;

	// 2. Print out the first 10 Fibonacci numbers, starting with 0, calculated either recursively or iteratively.
	for (int i = 0; i < 10; i++) {
		cout << fibonacci(i) << " ";
	}
	cout << endl;

	// 3. Print out a random integer between 0 and 99. (You must use a random number function.)
	// Initializes the random number generator with a seed based on the current time.
	// This ensures that you get different random numbers each time you run the program.
	srand(time(0));

	// Generate a random number between 1 and 100
	int random_num = rand() % 100 + 1;

	std::cout << "Random number: " << random_num << std::endl;
    return 0;
}
